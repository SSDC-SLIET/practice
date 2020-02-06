x = int(input())
for i in range(1,x+1):
    y=0
    y = int(input())
    if y%3==0:
        n=int(y/3)
        print(n-1,n,n+1)
    else:
        print("-1")
