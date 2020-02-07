for i in range(int(input())):
    length=int(input())
    arr=list(input().split())
    i,j=0,len(arr)-1
    while i<=j:
        if i==j:
            print(arr[i])
            break
        print(arr[j],end=' ')
        print(arr[i],end=' ')
        i+=1
        j-=1
        if(j+1==i):
            print()
