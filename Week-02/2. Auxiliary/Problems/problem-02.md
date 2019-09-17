## [Problem Link](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/motu-and-patlu-1-ab612ad8/)

# **Motu and Patlu**

Motu and Patlu are very good friends and they love to eat ice-creams. Once they thought of playing a game, so they bought “n” ice-creams from the market of varying heights (may be same). They arranged the ice-creams in a line in random order. Motu starts to eat ice-creams from left to right and Patlu from right to left. The heights of the ice-creams are known.

Motu eats the ice-cream as twice the speed of Patlu (that’s the secret for his health :p ). If, anyone of them is eating the ice-cream , then definitely other one cannot have that ice-cream. However, if both of them reach the same ice-cream, Motu snatches it away from Patlu (he got more power than patlu :( ) and eats it. The winner will be the one who will eat more number of ice-creams.

Since, both of them are too busy in eating ice-creams they forgot to count the number of ice-creams they have already eaten. Can you help them in deciding the winner.

P.S.- Since, ‘WINTER HAS ALREADY ARRIVED’ ,so ice-creams will not melt as it is freezing out there.

Note : Time taken to eat a ice-cream is directly proportional to its height.

**Input :**

The first line contains one integer t, the number of test cases.

The first line of each test case contains one integer n,the number of ice-creams.

The second line contains a sequence , a1, a2, a3 . . . an where ai denotes height of ith ice-cream.

**Output :**

For each test case print two new lines.

First line contains two spaced integers, the no. of ice-creams eaten by Motu and Patlu respectively.

Second line contains the name of the winner, if motu eats more no. of icecreams print ‘Motu’ (without inverted commas), if patlu eats more no. of ice-creams print ‘Patlu’ (without inverted commas). In case of Tie print ‘Tie’ (without inverted commas).

**Constraints :**

1 ≤ t ≤ 100
1 ≤ n ≤ 100000
1 ≤ ai ≤ 10^9
**SAMPLE INPUT**
3
5
2 6 2 1 7
4
15 2 1 3
5
2 4 12 4 7
**SAMPLE OUTPUT**
4 1
Motu
1 3
Patlu
3 2
Motu

*Explanation
For first test case,

Motu will start eating 1st icecream of height 2. Patlu will start with 5th icecream of height 7.As Motu's speed is twice Patlu's, He will start with second icecream. Patlu still would be eating his first. Motu will start with his third icecream and will also eat 4th one when Patlu will finish his first.

For the second case,

Patlu will eat ice-creams placed at index 4,3,2.

For the third test case,

Motu will eat ice-creams placed at index 1,2,3 and patlu will eat last two ice-creams.*