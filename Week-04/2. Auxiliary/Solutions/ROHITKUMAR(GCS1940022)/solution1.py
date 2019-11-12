t=int(input())
for i in range(t):
    n,k=input().split()
    n=int(n)
    k=int(k)
    arr=list(map(int,input().split()))
    count=0
    for j in range(n):
        for l in range(n):
            if (j != l and arr[j] % arr[l] == k): 
                count+=1
    print(count)



	
