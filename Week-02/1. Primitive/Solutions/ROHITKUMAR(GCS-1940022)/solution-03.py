#code
t=int(input())
for i in range(t):
    n=int(input())
    arr=list(map(int,input().split()))
    for j in arr[::-1]:
        print(j,end=" ")
    print()
