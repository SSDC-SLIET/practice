t=int(input())
while t>0:
    n=int(input())
    a=[1,1]
    n-=1
    for i in range(2,n+1):
        a.append(a[i-1]*i)
    
    for i in range(n+1):
        print(a[n]//(a[n-i]*a[i]),end=" ")
    print()
    
    
    t-=1
