t = int(input())
for j in range(0,t) :
    r = int(input())
    l = list(input().split())
    for i in range(0,r) :
        if i==0 :
            if  int(l[i])!=int(l[i+1]) :
                print(l[i])
        elif i==r-1 :
            if int(l[i])!=int(l[i-1]) :
                print(l[i])
        else :
            if  int(l[i])!=int(l[i-1]) and int(l[i])!=int(l[i+1]) :
                    print(l[i])
