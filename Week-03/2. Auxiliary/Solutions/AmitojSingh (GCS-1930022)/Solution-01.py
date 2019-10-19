from fractions import gcd
def lcm(a, b):
    return abs(a*b) // gcd(a, b)
t=int(input())
while t>0:
    n,a,b,k=map(int,input().split())
    flag=0
    co=0
    r1=n//a
    r2=n//b
    r3=2*(n//lcm(a,b))
    r4=r1+r2-r3
    if r4>=k:
        print("Win")
    else:
        print("Lose")

    t-=1
