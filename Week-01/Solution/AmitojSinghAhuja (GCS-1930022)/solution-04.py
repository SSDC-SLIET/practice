t=int(input())
while t>0:
    
    n=int(input())
    a=list(map(int,input().split()))
    b=list(set(a))
    b=list(map(lambda x: 2*x,b))
    print(int(sum(b)-sum(a)))
    
    t-=1
