t=int(input())
for k in range(0,t):
    s=str(input())
    m=0
    d=1
    n=-1
    while m<=len(s)-1//2 and n<=0 and n>=-1*len(s)//2:
        while s[m].isalnum() != True :
            m+=1
        while s[n].isalnum() != True :
            n-=1
        if n== -1*(len(s)) :
            n=0
        if s[m].lower()!=s[n].lower() :
            d-=1
            print("NO")
            break
        m+=1
        n-=1
    if d>0 :
        print("YES")
