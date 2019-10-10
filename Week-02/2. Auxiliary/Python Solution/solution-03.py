def main():
    d = {}
    for _ in range(int(input())):
        n = int(input())
        a = input()
        b = input()
        res = 0
        for i in range(n // 2):
            l = [a[i], b[i], a[n - i - 1], b[n - i - 1]]
            # print(l)
            if b[i] == b[n - i - 1]:
                if a[i] != a[n - i - 1]:
                    res += 1

            else:
                if (a[i] == b[i] and a[n - i - 1] == b[n - i - 1]) or (a[i] == b[n - i - 1] and a[n - i - 1] == b[i]):
                    res += 0
                elif a[i] == b[i] or a[n - i - 1] == b[n - i - 1] or a[i] == b[n - i - 1] or a[n - i - 1] == b[i]:
                    res += 1
                else:
                    res += 2

        if n % 2 != 0:
            if a[n // 2] != b[n // 2]:
                res += 1

        print(res)


if __name__ == '__main__':
    main()

