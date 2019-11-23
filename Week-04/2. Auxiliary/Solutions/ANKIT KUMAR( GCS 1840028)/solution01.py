#code
    
def main():
    t=int(input())
    for _ in range(t):
        n,k=map(int,input().split())
        arr=[x for x in map(int,input().split())]
        arr=list(filter(lambda x:x>=k,arr))
        arr.sort()
        cnt_k=0
        cnt=0
        for i in range(len(arr)):
            if(i==0 and arr[i]==k):
                    cnt_k+=1
            else:
              for j in range(i+1,len(arr)):
                if(arr[j]%arr[i]==k):
                      #print(arr[j],arr[i])
                      cnt+=1
              cnt+=cnt_k
        #print(arr)    
        print(cnt)
            
            
if __name__=="__main__":
    main()
