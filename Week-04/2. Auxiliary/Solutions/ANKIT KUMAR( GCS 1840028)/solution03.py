#code
def fac(n):
    ans=1
    while(n):
        ans*=n
        n-=1
    return ans
    
if __name__=="__main__":
    t=int(input())
    for _ in range(t):
        x,y=map(int,input().split())
        ans=fac(x+y)//(fac(x)*fac(y))
        print(ans)
   
