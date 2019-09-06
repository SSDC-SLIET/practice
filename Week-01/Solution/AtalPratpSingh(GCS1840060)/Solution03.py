t = int(input())
for t in range(0,t) :
    o=0;
    e=0;
    c=[]
    p=[]
    n,d = map(int,input().split())
    c = list(input().split())
    p = list(input().split())
   
    for j in range(0,n) :
        if int(c[j])%2 == 0 :
            e = e +int(p[j])
        else :
	        o = o +int(p[j]) 
    if d%2 == 0 :
	    print(o)
    else :
	    print(e)   
