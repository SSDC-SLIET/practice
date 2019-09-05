t=int(input())
while t>0:
    n,a,b=map(int,input().split())
    ar=list(map(int,input().split()))
    f=0
    for i in range(a,b+1):
        if i not in ar:
            f=1
            break
    
    if f==0:
        print("Yes")
    else:
        print("No")
    t-=1
