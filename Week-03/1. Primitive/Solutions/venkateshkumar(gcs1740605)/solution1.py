from math import factorial as ft
for __ in range(int(input())):
    k=int(input())
    for i in range(k+1):
        num=ft(k)/(ft(k-i)*ft(i))
        print(int(num),end=" ")
