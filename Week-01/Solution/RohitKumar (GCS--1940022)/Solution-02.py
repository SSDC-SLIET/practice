T=int(input())

def in_array(arr,num,a,b):
    count=0
    for i in range(a,b+1):
        if i in arr:
            count+=1
    if count==num:
        print("Yes")
    else:
        print("No")
        
            


for i in range(T):
    n,A,B=input().split()
    n=int(n)
    A=int(A)
    B=int(B)
    array=list(map(int,input().split()))
    in_array(array,n,A,B)
            
    
