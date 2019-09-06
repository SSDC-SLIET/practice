t = int(input())
for t in range(0,t) :
    o=0;
    e=0;
    c=[]
    p=[]
    n,d = map(int,input().split())
    c1 = input().split()
    d1 = input().split()
    for i in c1 :
        c.append(int(i))
    for k in d1 :
        p.append(int(k)) 
    for j in range(0,n) :
        if c[j]%2 == 0 :
            e = e +p[j]
        else :
	        o = o +p[j] 
    if d%2 == 0 :
	    print(o)
    else :
	    print(e) 
