# [Bitwise ORs of Subarrays](https://leetcode.com/problems/bitwise-ors-of-subarrays/)

### Description

Given an integer array arr, return the number of distinct bitwise ORs of all the non-empty subarrays of arr.

The bitwise OR of a subarray is the bitwise OR of each integer in the subarray. The bitwise OR of a subarray of one integer is that integer.

A subarray is a contiguous non-empty sequence of elements within an array.

 


## Constraints

- 1 <= arr.length <= 5 * 104
- 0 <= arr[i] <= 109

## Examples

### Example 1
Input: arr = [1,1,2]

Output: 3

Explanation: The possible subarrays are [1], [1], [2], [1, 1], [1, 2], [1, 1, 2].
These yield the results 1, 1, 2, 1, 3, 3.
There are 3 unique values, so the answer is 3.


<img width="979" height="562" alt="image" src="https://github.com/user-attachments/assets/a280328c-904d-48dd-a039-a592e4b71999" />
