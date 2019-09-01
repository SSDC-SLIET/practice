for _ in range(int(input())):
    N1 = int(input())
    arr1 = list(map(int, input().split()))
    N2 = int(input())
    arr2 = list(map(int, input().split()))
    print(max(arr1)*min(arr2))
