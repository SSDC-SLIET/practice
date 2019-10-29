for __ in range(int(input())):
    a=[]
    n=int(input())
    for i in range(n):
        a.append(set(input()))
    b=a[0]
    for i in range(1,n):
        b=a[i].intersection(b)
    print(len(b))
