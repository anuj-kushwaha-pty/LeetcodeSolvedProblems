# [Special Positions in a Binary Matrix](https://leetcode.com/problems/special-positions-in-a-binary-matrix/)

### Description

Given an m x n binary matrix mat, return the number of special positions in mat.

A position (i, j) is called special if mat[i][j] == 1 and all other elements in row i and column j are 0 (rows and columns are 0-indexed).


## Constraints

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 100
- mat[i][j] is either 0 or 1.

  
## Examples

### Example 1

<img width="244" height="245" alt="image" src="https://github.com/user-attachments/assets/6038776a-0e3c-461c-87b6-4f4bb755de7a" />

Input: mat = [[1,0,0],[0,0,1],[1,0,0]]

Output: 1

Explanation: (1, 2) is a special position because mat[1][2] == 1 and all other elements in row 1 and column 2 are 0.
