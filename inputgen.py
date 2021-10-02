from random import randint
# u is included in randint (unlike range) 
def gint(l,u):
    t=randint(l,u)
    print(t,end=' ')
    return t

def gintln(l,u):
    t=randint(l,u)
    print(t)
    return t

def gintarrln(l,u,n):
    t=[randint(l,u) for _ in range(n)]
    print(*t)

#--------Main-----------------

print(1)
tmp= gint(1,100)
gint(0,tmp)






