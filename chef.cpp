#include<bits/stdc++.h>
using namespace std;

int main()
{
     int tests;
     cin>>tests;
     while(tests--)
     {
          int n,k;
          cin>>n>>k;
          if(k==n-1)
          {
               cout<<-1<<endl;
               continue;
          }

          for(int i=1;i<=k;i++)
          cout<<i<<" ";

          for(int i=k+1;i<n;i++)
          cout<<i+1<<" ";

          if(k!=n)
          cout<<k+1<<endl;
          else
          cout<<endl;
     }
}
