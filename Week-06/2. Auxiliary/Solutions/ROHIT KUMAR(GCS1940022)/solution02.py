#code
t = int(input())
for i in range(t):
    n = int(input())
    arr = list(map(int,input().split()))
    k = int(input())
    arr.sort()
    print(arr[k-1])
