def main():
    t=int(input())
    for _ in range(t):
        n=int(input())
        arr=[x for x in map(int,input().split())]
        part1=0
        part2=0
        for x in range(n//2):
            part1+=arr[x]
        for x in range(n//2,n):
            part2+=arr[x]
        print(part1*part2)
    
if __name__=="__main__":
    main()
