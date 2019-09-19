t=int(input())
for i in range(0,t) :
    n=int(input())
    a=list(input().split())
    for j in range(0,n-1) :
        if int(a[j])>int(a[j+1]) :
            t=a[j]
            a[j]=a[j+1]
            a[j+1]=t
    for j in range(1,n) :
        if int(a[0])>int(a[j]) :
            t=a[j]
            a[j]=a[0]
            a[0]=t
    print(a[n-1],a[0],sep=" ")
            
