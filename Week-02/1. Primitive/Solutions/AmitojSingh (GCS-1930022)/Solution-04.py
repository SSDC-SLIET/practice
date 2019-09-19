t=int(input())
while(t>0):
    n=int(input())
    a=list(map(int,input().split()))
    print(max(a),min(a))
    t-=1
