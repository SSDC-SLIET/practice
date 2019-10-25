for __ in range(int(input())):
    n,s=map(int,input().split())
    arr=list(map(int,input().split()))
    count=0
    for i in range(n):
        for j in range(i+1,n):
            if arr[i]+arr[j]==s:
                count=count+1
    print(count)
