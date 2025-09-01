# [Divide Array Into Arrays With Max Difference](https://leetcode.com/problems/divide-array-into-arrays-with-max-difference/)

### Description

You are given an integer array nums of size n where n is a multiple of 3 and a positive integer k.

Divide the array nums into n / 3 arrays of size 3 satisfying the following condition:

- The difference between any two elements in one array is less than or equal to k.
  
Return a 2D array containing the arrays. If it is impossible to satisfy the conditions, return an empty array. And if there are multiple answers, return any of them.


## Constraints

- n == nums.length
- 1 <= n <= 105
- n is a multiple of 3
- 1 <= nums[i] <= 105
- 1 <= k <= 105
  
## Examples

### Example 1
Input: nums = [4,2,9,8,2,12,7,12,10,5,8,5,5,7,9,2,5,11], k = 14

Output: [[2,2,2],[4,5,5],[5,5,7],[7,8,8],[9,9,10],[11,12,12]]

Explanation: The difference between any two elements in each array is less than or equal to 14.
