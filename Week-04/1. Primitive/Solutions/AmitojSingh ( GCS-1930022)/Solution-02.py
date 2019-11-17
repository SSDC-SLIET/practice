t=int(input())
while(t>0):
    n=int(input())
    a=list(map(int,input().split()))
    ls=sum(a[:n//2])
    rs=sum(a[n//2:])
    print(ls*rs)
    t-=1
