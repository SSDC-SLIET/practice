t=int(input())
for j in range(0,t) :
    n = int(input())
    z = list(input().split())
    for i in range(n-1,-1,-1) :
        print(z[i],end = " ")
    print("\n",end="")
