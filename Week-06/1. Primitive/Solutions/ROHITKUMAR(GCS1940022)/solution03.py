#code
import numpy as rk
t = int(input())

for i in range(t):
    n = int(input())
    mat = list(map(int,input().split()))
    

    matrix = rk.array(mat).reshape((n,n))
        
    d1 = 0
    d2 = 0
  
    for p in range(0, n): 
        d1 = d1 + matrix[p][p] 
        d2 = d2 + matrix[p][n - p - 1] 
    print(abs(d1-d2))
