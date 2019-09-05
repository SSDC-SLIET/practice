  
#code
n=int(input())
for i in range(n):
    num1=int(input())
    array1=list(map(int,input().split()))
    num2=int(input())
    array2=list(map(int,input().split()))
    print(max(array1)*min(array2))
