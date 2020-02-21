t=int(input())
for _ in range(t):
    n=input()
    arr=list(map(int,input().split()))
    arr.sort()
    k = int(input())
    print(arr[k-1])
