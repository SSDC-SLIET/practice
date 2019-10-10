## [Problem Link](https://www.codechef.com/FEB19B/problems/ARTBALAN)

# ** Art of Balance **

"Everything in the universe is balanced. Every disappointment you face in life will be balanced by something good for you! Keep going, never give up."

Let's call a string balanced if all characters that occur in this string occur in it the same number of times.

You are given a string S; this string may only contain uppercase English letters. You may perform the following operation any number of times (including zero): choose one letter in S and replace it by another uppercase English letter. Note that even if the replaced letter occurs in S multiple times, only the chosen occurrence of this letter is replaced.

Find the minimum number of operations required to convert the given string to a balanced string.
**Input Format:**

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains a single string S.

**Output Format:**

For each test case, print a single line containing one integer ― the minimum number of operations.

**Constraints:**
1≤T≤10,000
1≤|S|≤1,000,000
the sum of |S| over all test cases does not exceed 5,000,000
S contains only uppercase English letters


**SAMPLE INPUT**
2
ABCB
BBC
**SAMPLE OUTPUT**
1
1

*Explanation
Example case 1: We can change 'C' to 'A'. The resulting string is "ABAB", which is a balanced string, since the number of occurrences of 'A' is equal to the number of occurrences of 'B'.

Example case 2: We can change 'C' to 'B' to make the string "BBB", which is a balanced string.*
