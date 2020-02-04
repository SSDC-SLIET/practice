# [Problem Link](https://www.geeksforgeeks.org/maximum-subarray-sum-in-array-formed-by-repeating-the-given-array-k-times/)

**Problem Name: Maximum subarray sum in array formed by repeating the given array k times.**

Given an integer k and an integer array arr[] of n elements, the task is to find the largest sub-array sum in the modified array (formed by repeating the given array k times). For example, if arr[] = {1, 2} and k = 3 then modified array will be {1, 2, 1, 2, 1, 2}.

**Examples:**

**Input:** arr[] = {1, 2}, k = 3
**Output:** 9
Modified array will be {1, 2, 1, 2, 1, 2}
And the maximum sub-array sum will be 1 + 2 + 1 + 2 + 1 + 2 = 9

**Input:** arr[] = {1, -2, 1}, k = 5
**Output:** 2

**Recommended:** Please try your approach on {IDE} first, before moving on to the solution.
A simple solution is to create an array of size n * k, then run Kadane’s algorithm to find the maximum sub-array sum. Time complexity would be O(n * k) with auxiliary space O(n * k).

A better solution is to calculate the sum of the array arr[] and store it in sum.

If sum < 0 then calculate the maximum sub-array sum of an array formed by concatenating the array two times irrespective of the K. For example, take arr[] = {1, -4, 1} and k = 5. The sum of the array is less than 0. So, the maximum sub-array sum of the array can be found after concatenating the array two times only irrespective of the value of K i.e. b[] = {1, -4, 1, 1, -4, 1} and the maximum sub-array sum = 1 + 1 = 2
.

If sum > 0 then maximum sub-array will include the maximum sum as calculated in the previous step (where the array was concatenated twice) + the rest (k – 2) repetitions of the array can also be included as their sum is greater than 0 that will contribute to the maximum sum.
