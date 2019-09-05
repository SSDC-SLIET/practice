#code
t=int(input())
for i in range(t):
    N,D=input().split()
    N=int(N)
    D=int(D)
    C=list(map(int,input().split()))
    P=list(map(int,input().split()))
    total=0
    if D%2!=0:
        for j in range(N):
            if C[j]%2==0:
                total+=P[j]
    else:
        for k in range(N):
            if C[k]%2!=0:
                total+=P[k]
    print(total)            
