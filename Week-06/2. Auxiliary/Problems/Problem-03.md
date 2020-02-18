# [Problem Link](https://practice.geeksforgeeks.org/problems/the-painters-partition-problem/0/)

**Problem Name: The Painter's Partition Problem.**

Dilpreet wants to paint his dog- Buzo's home that has n boards with different lengths[A1, A2,..., An]. He hired k painters for this work and each painter takes 1 unit time to paint 1 unit of the board.The problem is to find the minimum time to get this job done under the constraints that any painter will only paint continuous sections of boards, say board {2, 3, 4} or only board {1} or nothing but not board {2, 4, 5}.

**Input:**

The first line consists of a single integer T, the number of test cases. For each test case, the first line contains an integer k denoting the number of painters and integer n denoting the number of boards. Next line contains n- space separated integers denoting the size of boards.

**Output:**

For each test case, the output is an integer displaying the minimum time for painting that house.

**Constraints:**

1<=T<=100

1<=k<=30

1<=n<=50

1<=A[i]<=500

**Example:**

Input:

2

2 4

10 10 10 10

2 4

10 20 30 40

**Output:**

20

60


**Explanation:**

1. Here we can divide the boards into 2 equal sized partitions, so each painter gets 20 units of the board and the total time taken is 20.

2. Here we can divide first 3 boards for one painter and the last board for the second painter.
