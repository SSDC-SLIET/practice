for i in range(int(input())):
    num1,num2=map(int,input().split())
    print(num1+num2 if (num1+num2)<12 else (num1+num2)%12)
