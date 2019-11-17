import math
t=int(input())
while t>0:
    n=int(input())
    a=input().split()
    no=''.join(a);
    b=n*'1'
    b1=int('0b'+b,2)
    c1=int('0b'+no,2)
    rs=b1^c1
    rr=math.log2(rs+1)
    print(int(rr))
    t-=1
