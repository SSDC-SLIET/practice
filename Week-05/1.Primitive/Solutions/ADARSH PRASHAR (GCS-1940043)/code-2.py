def consecutive():
    n=int(input())
    if ((n-3)%3)==0:
        j=int((n-3)/3)
        print(j,j+1,j+2)
    else:
        print(-1)
for _ in range(int(input())):
    consecutive()
