t=int(input())
while t>0:
    s=list(input())
    b=[]
    for i in s:
        if((ord(i) >=97 and ord(i)<=122) or (ord(i) >=65 and ord(i)<=91)):
            b.append(i.lower())
        elif(ord(i) >=48 and ord(i)<=57):
            b.append(i)
    
    if b==b[::-1]:
        print("YES")
    else:
        print("NO")
    t-=1
