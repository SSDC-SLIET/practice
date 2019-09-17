def main():
    arr = [1]
    c, i = 0, 1
    while c <= (10 ** 6):
        arr1 = []
        for i in arr:
            arr1 += [2 * i, 3 * i, 5 * i]
            c += 1
        arr += arr1
        arr = list(set(arr))
    arr.sort()
    for _ in range(int(input())):
        n = int(input())
        print(arr[n - 1])


if __name__ == '__main__':
    main()