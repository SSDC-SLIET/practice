def main():
    for _ in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        arr = arr[::-1]
        for i in range(n, 0, -1):
            for j in range(0, n):
                print(arr[i + n * j - 1], end=' ')
        print()


if __name__ == '__main__':
    main()