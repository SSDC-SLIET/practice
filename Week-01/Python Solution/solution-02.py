def main():
    t = int(input())
    for _ in range(t):
        n, a, b = map(int, input().split())
        d = {}
        arr = list(map(int, input().split()))
        for i in arr:
            d[i] = 1
        res = 'Yes'
        for i in range(a, b + 1):
            if i not in d:
                res = 'No'
                break
        print(res)


if __name__ == '__main__':
    main()