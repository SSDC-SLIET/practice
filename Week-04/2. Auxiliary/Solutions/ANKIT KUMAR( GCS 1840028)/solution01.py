#code
def main():
    t=int(input())
    for _ in range(t):
        n,k=map(int,input().split())
        arr=[x for x in map(int,input().split())]
        arr.sort();
        count=0
        f_c=0
        for i in range(n):
            if(arr[i]==k):
                count+=1
            elif(arr[i]>k):
                count1=0
                for j in range(i+1,n):
                    if(arr[j]%arr[i]==k):
                        count1+=1
                f_c+=count1+count
        print(f_c)
            
            
if __name__=="__main__":
    main()
