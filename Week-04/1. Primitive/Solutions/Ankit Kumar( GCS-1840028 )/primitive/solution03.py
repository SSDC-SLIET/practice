#code
def index(arr,s,l):
    if s<0 and s>l:
        return -1
    if arr[s]==0:
        return s
    mid=(s+l)//2
    if arr[mid]==0 and (arr[mid-1]==1):
        return mid
    elif arr[mid]==1:
        return index(arr,mid+1,l)
    else:
        return index(arr,s,mid-1)
        
    
def main():
    t=int(input())
    for _ in range(t):
        n=int(input())
        arr=[x for x in map(int,input().split())]
        ans=index(arr,0,n-1)
        if(ans==-1):
            print(0)
        else:
            print(n-ans)
if __name__=="__main__":
    main()
