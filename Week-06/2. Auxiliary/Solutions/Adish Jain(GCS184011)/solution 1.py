import bisect
t=int(input())
for _ in range(t):
    m,n=input().split()
    n=int(n)
    X=list(map(int,input().split()))
    Y=list(map(int,input().split()))
    Y.sort()
    no=[Y.count(i) for i in range(6)]
    c=0
    for x in X:
#        print('for number ',x,end=' : ')
        if x == 1:
           continue
#           print('case 4')
        i = bisect.bisect_right(Y, x) 
        c += n - i 
        c+=no[1]
        if x == 3:
            c+=no[2]
        elif x == 2:
            c=c-no[3]-no[4]
#        print("count ",c)
    print(c)
