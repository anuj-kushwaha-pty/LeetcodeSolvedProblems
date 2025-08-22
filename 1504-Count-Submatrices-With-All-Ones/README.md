# [Count Submatrices With All Ones](https://leetcode.com/problems/count-submatrices-with-all-ones/)

### Description

Given an m x n binary matrix mat, return the number of submatrices that have all ones.



## Constraints

- 1 <= m, n <= 150
- mat[i][j] is either 0 or 1.

## Examples

### Example 1
<img width="244" height="245" alt="image" src="https://github.com/user-attachments/assets/75c18093-ad55-46b8-93a2-4b59309fc6bb" />

Input: mat = [[1,0,1],[1,1,0],[1,1,0]]

Output: 13

Explanation: 
There are 6 rectangles of side 1x1.

There are 2 rectangles of side 1x2.

There are 3 rectangles of side 2x1.

There is 1 rectangle of side 2x2. 

There is 1 rectangle of side 3x1.

Total number of rectangles = 6 + 2 + 3 + 1 + 1 = 13.
