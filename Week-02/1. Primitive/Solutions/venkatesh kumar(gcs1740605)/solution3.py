#code
t=int(input())
for i in range(t):
    size=int(input())
    ar=list(map(int,input().split()))
    ar=ar[: : -1]
    print(" ".join(map(str,ar)))
