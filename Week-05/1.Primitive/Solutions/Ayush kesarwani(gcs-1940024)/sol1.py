T = int(input())
for i in range(1,T+1):
    x = list(map(int,input().split()))
    y=x[0]+x[1]
    if y>=12:
        print(y%12)
    else:
        print(x[0]+x[1])