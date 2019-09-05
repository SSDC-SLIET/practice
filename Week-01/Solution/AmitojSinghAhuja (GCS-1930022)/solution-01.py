t=int(input())
while t>0:
    n1=int(input())
    a1=list(map(int,input().split()))
    n2=int(input())
    a2=list(map(int,input().split()))
    print(int(max(a1)*min(a2)))
    t-=1
