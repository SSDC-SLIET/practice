#code
t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    print(max(arr),end=" ")
    print(min(arr))
