#code
t=int(input())
for i in range(t):
    n=int(input())
    k=1
    for j in range(1,n+1):
        print(k,end=" ")
        k=k*(n-j)//j
    print()
