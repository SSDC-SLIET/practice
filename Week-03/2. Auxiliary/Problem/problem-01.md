## [Problem Link](https://www.codechef.com/FEB19B/problems/HMAPPY2)

# **Appy and Contest **

TAppy and Chef are participating in a contest. There are N problems in this contest; each problem has a unique problem code between 1 and N inclusive. Appy and Chef decided to split the problems to solve between them ― Appy should solve the problems whose problem codes are divisible by A but not divisible by B, and Chef should solve the problems whose problem codes are divisible by B but not divisible by A (they decided to not solve the problems whose codes are divisible by both A and B).

To win, it is necessary to solve at least K problems. You have to tell Appy whether they are going to win or lose.

**Input Format:**

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains four space-separated integers N, A, B and K.
**Output Format:**

For each test case, print a single line containing the string "Win" if they can solve at least K problems or "Lose" otherwise (without quotes).

**Constraints:**
1≤T≤15
1≤K≤N≤1018
1≤A,B≤109


**SAMPLE INPUT**
1
6 2 3 3
**SAMPLE OUTPUT**
Win
*Explanation
Example case 1: Appy is solving the problems with codes 2 and 4, Chef is solving the problem with code 3. Nobody is solving problem 6, since 6 is divisible by both 2 and 3. Therefore, they can solve 3 problems and win.*