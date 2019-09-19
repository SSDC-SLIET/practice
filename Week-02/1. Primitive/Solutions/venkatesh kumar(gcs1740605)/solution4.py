#code
t=int(input())
for i in range(t):
    size=int(input())
    ar=list(map(int,input().split()))
    print(max(ar),min(ar))
