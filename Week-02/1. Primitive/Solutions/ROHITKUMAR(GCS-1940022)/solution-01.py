#code
t=int(input())
for i in range(t):
    num1,num2=map(int,input().split())
    num1=num1+num2
    num2=num1-num2
    num1=num1-num2
    print(num1,end=" ")
    print(num2)
