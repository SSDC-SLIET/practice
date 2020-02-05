import numpy as np
def rotate():
    n=int(input())
    entries=list(map(int,input().split()))
    arr1=np.array(entries).reshape(n,n)
    arr1=list(zip(*arr1[::-1]))
    for i in range(n):
        for j in range(n):
            print(arr1[i][j],end=" ")
    print()
if __name__=='__main__':
    T=int(input())
    for i in range(T):
        rotate()
