# [Sort Matrix by Diagonals](https://leetcode.com/problems/sort-matrix-by-diagonals/)

### Description

You are given an n x n square matrix of integers grid. Return the matrix such that:

The diagonals in the bottom-left triangle (including the middle diagonal) are sorted in non-increasing order.
The diagonals in the top-right triangle are sorted in non-decreasing order.


## Constraints

- grid.length == grid[i].length == n
- 1 <= n <= 10
- -105 <= grid[i][j] <= 105
  
## Examples

### Example 1
Input: grid = [[1,7,3],[9,8,2],[4,5,6]]

Output: [[8,2,3],[9,6,7],[4,5,1]]

Explanation:

<img width="461" height="181" alt="image" src="https://github.com/user-attachments/assets/53fb54d5-4576-45e6-bd2f-0c09211a129f" />


The diagonals with a black arrow (bottom-left triangle) should be sorted in non-increasing order:

[1, 8, 6] becomes [8, 6, 1].
[9, 5] and [4] remain unchanged.
The diagonals with a blue arrow (top-right triangle) should be sorted in non-decreasing order:

[7, 2] becomes [2, 7].
[3] remains unchanged.
