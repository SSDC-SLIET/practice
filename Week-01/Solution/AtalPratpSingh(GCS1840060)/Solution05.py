t = int(input())
for j in range (0,t) :
    n = int(input())
    c=0
    i=0
    j=n-1
    a = list(input().split())
    r = int(input())
    while i<j:
        
        if int(a[i])+int(a[j])==r:
            print(a[i],a[j],r)
            j-=1
            i+=1
            c+=1
        elif int(a[i])+int(a[j])<r:
            i=i+1
        elif int(a[i])+int(a[j])>r:
            j=j-1
           
            
    if c==0 :
        print("-1")
        
