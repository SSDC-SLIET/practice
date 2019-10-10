## [Problem Link](https://www.codechef.com/FEB19B/problems/CHEFING)

# **Chef and Secret Ingredients**

Chef recently visited ShareChat Cafe and was highly impressed by the food. Being a food enthusiast, he decided to enquire about the ingredients of each dish.

There are N dishes represented by strings S1,S2,…,SN. Each ingredient used for making dishes in ShareChat Cafe is represented by a lowercase English letter. For each valid i, the ingredients used to make dish i correspond to characters in the string Si (note that ingredients may be used multiple times). A special ingredient is an ingredient which is present in each dish at least once.

Chef wants to know the number of special ingredients in ShareChat Cafe. Since Chef is too busy with work, can you help him?
**Input Format:**

The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first line of each test case contains a single integer N.
N lines follow. For each i (1≤i≤N), the i-th of these lines contains a single string Si.
**Output Format:**

For each test case, print a single line containing one integer ― the number of special ingredients in the dishes.
**Constraints:**
1≤T≤1,000
1≤N≤1,000
1≤|Si|≤200 for each valid i
S1,S2,…,SN contain only lowercase English letters
The sum of length of strings over all test cases ≤ 3500000



**SAMPLE INPUT**
2
3
abcaa
bcbd
bgc
3
quick
brown
fox
**SAMPLE OUTPUT**
2
0

*Explanation
Example case 1: Ingredients 'b' and 'c' are present in all three dishes, so there are two special ingredients.

Example case 2: No ingredient is common to all three dishes.*
