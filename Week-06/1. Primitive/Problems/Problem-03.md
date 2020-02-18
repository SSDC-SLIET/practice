# [Problem Link](https://practice.geeksforgeeks.org/problems/find-difference-between-sum-of-diagonals/0)

**Problem Name: Find difference between sum of diagonals.**

Given a matrix A[][] of size N X N. The task is to calculate the absolute difference between the sums of its diagonal.

**Input:**
               A[][] = 11 2 4
                     4 5 6
                    10 8 -12

**Output:**  
15

Sum of primary diagonal = 11 + 5 + (-12) = 4.

Sum of secondary diagonal = 4 + 5 + 10 = 19.

Difference = |19 - 4| = 15.

 

**Input:**

The first line of input consists of T, denoting number of the test cases. Then T testcases follow. The first line of every test case consists of N, denoting the size of matrix. The second line of every test case consists of N*N spaced integers.

**Output:**

For each test case in a single line print an integer denoting the difference between the sum of its diagonals.

**Constraints:**

1 <= T <= 100

1 <= N <= 50

1 <= A[i][j] <= 100

**Example:**

**Input:**

2

3

11 2 4 4 5 6 10 8 -12

4

1 2 3 4 5 9 7 8 6 10 11 12 13 14 15 16

**Output:**

15

3
