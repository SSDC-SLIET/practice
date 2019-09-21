import copy
def check_min(c,r):
    b=copy.deepcopy(c)
    for i in b:
        if b[i]!=0:
            b[i]=b[i]-r
        if b[i]<0:
            b[i]=0
        #print(b)
    d= min(b,key=b.get)
    #print(d)
    if b[d]==0:
        c[d]=0
    return d
n,m=map(int,input().split())
a={}
e={}
k=[]
for i in range(1,m+1):
    a[i]=0
while n>0:
    s,j=map(int,input().split())
    e[s]=j
    k.append(s)
    n-=1

f={}
l=list(e.keys())
for i in range(len(e)):
    ind=check_min(a,l[i])
    if a[ind]!=0:
        f[l[i]]=-1
        #print(-1,end=" ",sep=" ")
    else:
        a[ind]=e[l[i]]+l[i]
        #print(e)
        f[l[i]]=ind
        #print(ind,end=" ",sep=" ")

for i in k:
    print(f[i],sep=" ",end=" ")

