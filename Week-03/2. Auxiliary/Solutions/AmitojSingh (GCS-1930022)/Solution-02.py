t=input()
t=int(t)
while t>0:

    n=int(input())
    s=set(list(input()))

    for i in range(1,n):
        s=s&set(list(input()))
    print(len(s))
    
    t-=1
