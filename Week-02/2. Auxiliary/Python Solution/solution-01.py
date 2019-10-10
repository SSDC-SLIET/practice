def main():
    (n, m) = map(int, input().split())
    d = {}
    d1 = {}
    for i in range(n):
        (si, ji) = map(int, input().split())
        d[si] = ji
        d1[si] = i
    l = list(d.keys())
    l.sort()
    taxi = [0]*m
    alloted = [0]*n
    for i in l:
        flag = 0
        for j in range(m):
            if i >= taxi[j]:
                taxi[j] = i+d[i]
                alloted[d1[i]] = j+1
                flag = 1
                break
        if flag == 0:
            alloted[d1[i]]=-1

    print(' '.join(map(str, alloted)))

if __name__ == '__main__':
    main()