def sum(n):
    sum=0
    for i in range(1,n+1):
        sum+=i*i
    return sum
    
T=int(input())
while T > 0:
    n=int(input())
    print(sum(n))
    T-=1
