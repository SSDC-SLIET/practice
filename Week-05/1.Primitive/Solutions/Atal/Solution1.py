#code
t = int(input())
for h in range(0,t):
    a,b = (int(x) for x in input().split())
    s=(a+b)%12
    
    print(s)
