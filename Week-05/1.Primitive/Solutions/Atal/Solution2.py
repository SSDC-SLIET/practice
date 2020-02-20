#code
t=int(input())
for h in range(0,t):
    n=int(input())
    s=n%3
    a=n//3
    if (s==0):
        print(a-1,a,a+1)
    else:
        print("-1")
        
