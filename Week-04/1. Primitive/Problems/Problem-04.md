## [CLICK HERE - Problem Link](https://practice.geeksforgeeks.org/problems/max-value-after-m-range-operation/0)

# **Max value after m range operation** 

Given an array of size N with all initial values as 0, write a program to perform following M range increment operations as shown below:
 

increment(a, b, k) : Increment values from 'a'
                     to 'b' by 'k'.  

After M operations, calculate the maximum value 
in the array.

**Input:**
First line of input contains a single integer T which denotes the number of test cases. T test cases follows. First line of each test case contains two space separated integers N and M. Next M lines of each test case contains three space separated integers a , b and k.

**Output:**
For each test case print the maximum element in the array after M increment operations.

**Constraints:**
1<=T<=100
1<=N<=105
1<=M<=1000
0<= a,b <= N-1

**Example:**
**Input:**
2
5 3
0 1 100
1 4 100
2 3 100
4 3
1 2 603
0 0 286
3 3 882
**Output:**
200
882