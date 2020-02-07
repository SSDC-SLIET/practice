T=int(input())
while T>0 :
    num1,num2=map(int,input().split())
    sum=num1+num2
    print(sum%12)
    T-=1
