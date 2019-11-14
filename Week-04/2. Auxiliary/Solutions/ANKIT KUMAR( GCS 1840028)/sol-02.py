import functools
def compare(a,b):
    if(len(a)<len(b)):
        return 1
    elif(len(a)>len(b)):
        return -1
    else:
        for i in range(len(a)):
            if(a[i]>b[i]):
                return -1
            elif(a[i]<b[i]):
                return 1
        return 0
def main():
    n=int(input())
    arr=[]
    for _ in range(n):
        arr.append(input())
    arr=sorted(arr,key=functools.cmp_to_key(compare))
    for i in range(n):
        print(arr[n-1-i],' ')
if __name__=="__main__":
    main()
