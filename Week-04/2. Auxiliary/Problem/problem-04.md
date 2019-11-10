## [Problem Link](https://practice.geeksforgeeks.org/problems/boundary-elements-of-matrix/0)

# **Boundary Elements of Matrix**

Given an NxN matrix .In the given matrix, you have to print the boundary elements of the matrix.

**Input :**
		1 2 3 4  
        5 6 7 8
        1 2 3 4
        5 6 7 8
**Output :**
		 1 2 3 4 
         5     8 
         1     4 
         5 6 7 8

**Input:**
First line consists of  the input contains an intger T denoting the number of  test cases. Then T test cases follow. First line of every test case consists of an integer N, denoting size of the Matrix. Second line of every test case consists of N x N spaced integers denoting elements of Matrix elements.

**Output:**
For each test case output a single line output, print the boundary elements of the matrix.

**Constraints:**
1<=T<=100
1<=N<=100

**Example:**
**Input:**
2
4
1 2 3 4 5 6 7 8 1 2 3 4 5 6 7 8
3
45 48 54 21 89 87 70 78 15
**Ouput:**
1 2 3 4 5 8 1 4 5 6 7 8
45 48 54 21 87 70 78 15