#code
t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    sum1=0
    sum2=0
    for j in range(n//2):
        sum1+=arr[j]
    for j in range(n//2,n):
        sum2+=arr[j]
    print(sum1*sum2)
    
