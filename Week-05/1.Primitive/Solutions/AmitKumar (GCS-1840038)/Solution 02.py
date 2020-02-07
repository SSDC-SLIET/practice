T=int(input())
while T:
    n=int(input())
    for i in range(int(n/2)):
        if i+i+1+i+2 == n:
            print(i, i+1, i+2)
            break
    if i == int(n/2)-1 :
        print(-1)
    T-=1
