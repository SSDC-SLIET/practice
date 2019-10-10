def main():
    for _ in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        arr = arr[::-1]
        for i in range(n, 0, -1):
            for j in range(0, n):
                print(arr[i + n * j - 1], end=' ')
        print()


def rotate(mat, n):
    for x in range(0, int(n / 2)):
        for y in range(x, n - x - 1):
            temp = mat[x][y]
            mat[x][y] = mat[y][n - 1 - x]
            mat[y][n - 1 - x] = mat[n - 1 - x][n - 1 - y]
            mat[n - 1 - x][n - 1 - y] = mat[n - 1 - y][x]
            mat[n - 1 - y][x] = temp

if __name__ == '__main__':
    main()