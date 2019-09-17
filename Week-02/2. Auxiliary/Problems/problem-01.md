## [Problem Link](https://www.hackerearth.com/practice/algorithms/greedy/basics-of-greedy-algorithms/practice-problems/algorithm/taxi-please/description/)

# **Taxi Please!**

Today, you have been given the task of handling the entire Taxi Network of Berland City. Berland city has a huge number of taxi travellers, and you need to help them in transportation in the most efficient manner.

To be precise, this city consists of N users who want to travel via a Taxi today. You have a total of M taxis and need to cater to the users using these taxis. Each user has two parameters associated with them,  and , denoting the time at which a user requests a taxi and the travel time required to reach the destination of this particular user. Each taxi can be used by a maximum of 1 user at each point in time.

If, at any point in time a user requests a taxi and all M taxis are busy, then this user's request is rejected. If multiple taxis are available at the time of the request of a user, the taxi with the lowest index that is available is alloted to them. Now, you need to find for each user, the index of the taxi alloted to them. If a particular user's request is rejected, print "-1" (without quotes) for them.

Note: For the purpose of the problem, we consider a user gets their taxi immediately if their request is accepted. The taxi's are enumerated from 1 to M. A taxi is considered to be free as soon as the previous user's journey ends. It is guaranteed that the request time of each user is unique.

**Input Format:**

The first line contains two integers N and M denoting the number of users and the number of taxis respectively. Each of the next N lines contains 2 space separated integers  and  denoting the request and journey time of the  user.

**Output Format:**

For each user from 1 to N, print the index number of the taxi alloted to them. If a user's request is rejected , print "-1"(without quotes) for them.

**Constraints:**
 1 <= N <= 10**5
 1 <= M <= 100
 1 <= Si, Ji <= 10^9



**SAMPLE INPUT**
5 5
1 100
2 100
3 100
4 100
5 100
**SAMPLE OUTPUT**
1 2 3 4 5
*Explanation
Here, user 1 is given taxi 1, user 2 is given taxi 2, user 3 is given taxi 3 and so on for user 4and 5.*