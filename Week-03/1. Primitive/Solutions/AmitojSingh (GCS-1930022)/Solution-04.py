from itertools import combinations
try:
    t=int(input())
    while t>=0:
        n,k=map(int,input().split())
       
        a=list(map(int,input().split()))
        b=[comb for comb in combinations(a, 2) if sum(comb)==k]
        #print(b)
        print(len(b))
    t-=1
except:
    pass
