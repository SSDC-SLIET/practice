def palindrome(s):
    d = {}
    n = len(s)
    i, j = 0, n - 1
    while i <= j:
        while s[i].isalnum() == False:
            i += 1
        while s[j].isalnum() == False:
            j -= 1
        a, b = s[i].capitalize(), s[j].capitalize()
        if a != b:
            return 'NO'
        i += 1
        j -= 1
    return 'YES'


def main():
    for _ in range(int(input())):
        s = input()
        print(palindrome(s))


if __name__ == '__main__':
    main()