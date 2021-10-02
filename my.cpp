#include<bits/stdc++.h>
#define ll long long
#define mod7 1000000007
using namespace std;

void myfunc() {
    int n,k;
    cin >> n >> k;
    vector<int> v(n);
    
    if(n-k==1) {
		cout << -1 << endl;
		return;
	}
	
    
    int i=0;
    for(;i<n && i<k;i++) {
		v[i]=i+1;
	}
	
	int tmp=i++;
	for(int j=n-1;j>=tmp;j--)
	v[j]=i++;
	
	
	for(int x:v) 
	cout << x << ' ' ;
	cout << endl;
	
}

int main() {
    long t=1;
    cin >> t;
    while(t--)
    myfunc();
    return 0;
}
