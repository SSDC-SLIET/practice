t=int(input())

while t>0:
    n=int(input())
    a=list(map(int,input().split()))
    m=list(map(lambda x:x/2,a))
    p=a
    mi=0
    pi=n-1
    sumsM=0
    sumsP=0
    sumsM+=m[mi]
    sumsP+=p[pi]
    while True:
        if(len(a)==1):
            mi=0
            pi=1
            break
        if((pi-mi)==1):
            break
        if(sumsM<sumsP):
            mi+=1
            if(pi-mi==0):
                mi-=1
            if((pi-mi)==1):
                break
            else:
                sumsM+=m[mi]
        if(sumsM>sumsP):
            pi-=1
            if(pi-mi==0):
                pi+=1
            if((pi-mi) ==1):
                break
            else:
                sumsP+=p[pi]
        if(sumsM==sumsP):
            mi+=1
            if(pi-mi==0):
                mi-=1
            if((pi-mi)==1):
                break
            else:
                sumsM+=m[mi]
    mo=(mi+1)
    po=(n-pi)
    print(mo,po)
    if(mo>po):
        print("Motu")
    elif(po>mo):
        print("Patlu")
    else:
        print("Tie")
    t-=1
