#code
t=int(input())
for i in range(t):
    N=int(input())
    A=list(map(int,input().split()))
    for j in A:
        if A.count(j)==1:
            print(j)
