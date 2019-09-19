def convertFive(n):
    #Code here
    z=1
    a=[0]
    i=1
    s=0
    while(z>=1) :
        d=((n%(10**(i)))-(n%(10**(i-1))))//(10**(i-1))
        if d==0 :
            d=5
        s+=d*(10**(i-1))
        i+=1
        z=(n/(10**(i-1)))
    return(s)
