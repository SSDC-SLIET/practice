{
# Your code goes here
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        print (convertFive(int(input().strip())))
}
''' This is a function problem.You only need to complete the function given below '''
# Function should return an integer value
def convertFive(n):
    # Code here
    n=str(n)
    return int(n.replace("0","5"))
    
    
