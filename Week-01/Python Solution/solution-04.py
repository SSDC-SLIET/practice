def main():
    for _ in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        res = -1
        for i in range(1, n):
            if arr[i] != arr[i - 1]:
                if i == n - 1:
                    res = arr[i]
                    break
                if i == 1:
                    res = arr[i - 1]
                    break

                if arr[i] != arr[i + 1]:
                    res = arr[i]
                    break
        print(res)


if __name__ == '__main__':
    main()