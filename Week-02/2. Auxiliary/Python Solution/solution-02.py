def main():
    for _ in range(int(input())):
        n = int(input())
        arr = list(map(int, input().split()))
        motu, patlu = arr[0], 0
        i, j = 1, n-1
        count = 0
        while 1:
            if i > j:
                break
            while motu <= patlu:
                motu += arr[i]
                i += 1
                if i>j:
                    break
            while patlu < motu:
                if i > j:
                    break
                patlu += arr[j]*2
                j -= 1
                count += 1



        print(i, count)
        if i > count:
            print('Motu')
        elif i < count:
            print('Patlu')
        else:
            print('Tie')

if __name__ =='__main__':
    main()