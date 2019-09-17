def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        arr = list(map(int, input().split()))
        k = int(input())
        d = {}
        for i in arr:
            d[i] = 1
        check = True
        for i in arr:
            if i >= k / 2:
                break
            if k - i in d:
                print(i, k - i, k)
                check = False
        if check:
            print(-1)


if __name__ == '__main__':
    main()
