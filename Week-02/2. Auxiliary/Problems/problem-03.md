## [Problem Link](https://www.hackerearth.com/practice/algorithms/string-algorithm/basics-of-string-manipulation/practice-problems/algorithm/battle-of-bastards/)

# **Battle of Bastards**


In the battle of bastards, Ser Davos Seaworth and Tormund Giantsbane is left with a difficult task of making their army run fast and reach the Bolton Army before they reach Jon Snow. The army of Jon Snow consists of the Wildlings, lead by Tormund Giantsbane, and the houses loyal to the Starks, lead by Ser Davos Seaworth. In order to reach the Bolton Army before they reach Jon Snow, the orientation of two parts of army should be exactly same. Each part of the army is represented by a string of length n(1≤n≤100000), consisting of only lowercase english alphobets, each character of the string represents a soldier. String 'a' represents army of wildlings and string 'b' represents army of the houses loyal to starks. In order to make the orientation same they can perform one of the given four operations-

1.Choose any index i (1≤i≤n) and replace the character at position 'i' in string 'a' with any other character.
2.Choose any index i (1≤i≤n) and swap the characters a[i] and b[i].
3.Choose any index i (1≤i≤n) and swap the characters a[i] and a[n-i+1].
4.Choose any index i (1≤i≤n) and swap the characters b[i] and b[n-i+1].

Each of the operations can be performed any number of times. The time taken by 2nd, 3rd and 4th operation is negligible but the 1st operation takes 1 second of time. As Ser Davos Seaworth and Tormund Giantsbane have shortage of time they want to minimise the number of times they perform the 1st operation and also the 1st operation can be  performed only before any of the 2nd, 3rd and 4th operation is performed, that is , once 2nd or 3rd or 4th operation is performed the 1st operation cannot be performed. Now help Ser Davos Seaworth and Tormund Giantsbane to find the minimum number of seconds it takes to make the orientation of the army same.
Note:-
1. The 1st operation can only be on the army of wildlings(string a).
2. Once any of the operation 2 or 3 or 4 is performed operation 1 cannot be performed.


**Input Format-**

First line contains no of test cases t(1≤t≤10)

Second line contains n(length of the strings a and b)
Third line contains string of army of wildlings(string a).
Fourth Line contains string of army of houses loyal to the Starks(string b).


**Output Format-**
Single positive integer of the minimum number of seconds it takes to make the orientation of the army same in a new line for every test case.

**SAMPLE INPUT**
1
5
ahmad
yogaa

**SAMPLE OUTPUT**
3
*Explanation
In the sample test case, first we perform operation 1 on string a at position 2 and convert 'h' to 'o', then we perform operation 1 on string a at position 3 and convert 'm' to 'g',  then we perform operation 1 on string a at position 5 and convert 'd' to 'y', now finally we perform operation 3 on string a to swap 'a' with 'y'. Hence we peform operation 1 3 times, the answer is 3 seconds.*