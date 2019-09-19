{
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n=int(input())
        print(convertFive(n))
# Contributed by: Harshit sidhwa

}
''' This is a function problem.You only need to complete the function given below '''

def convertFive(n):
    a=str(n)
    a=a.replace('0','5')
    return a
