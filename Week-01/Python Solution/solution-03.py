def main():
    for _ in range(int(input())):
        (n, date) = map(int, input().split())
        car = list(map(int, input().split()))
        penalties = list(map(int, input().split()))
        fine = 0
        if date % 2 == 0:
            for i in range(n):
                if car[i] % 2 == 1:
                    fine += penalties[i]
        else:
            for  i in  range(n):
                if car[i] % 2 == 0:
                    fine += penalties[i]
        print(fine)


if __name__ == '__main__':
    main()