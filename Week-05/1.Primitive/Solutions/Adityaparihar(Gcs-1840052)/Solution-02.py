#code
if __name__ == '__main__':
    t=int(input())
    for i in range(t):
        n=int(input())
        count=0
        for i in range(1,n):
            if i+(i+1)+(i+2)==n:
                print(i, (i+1), (i+2))
                count+=1
        if count==0:
            print(-1)
