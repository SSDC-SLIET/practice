#code
x = int(input())
for i in range(x):
    y = int(input())
    z = list(map(int,input().split()))
    a = int(input())
    b = z.sort()
    print(z[a-1])
