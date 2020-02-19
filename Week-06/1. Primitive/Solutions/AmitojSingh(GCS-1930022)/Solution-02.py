t=int(input())
while t>0:
    sums=0
    n=int(input())
    
    for i in range(1,n+1):
        sums=sums+ i*i;
    print(sums)
    t-=1
