# [Find the Minimum Area to Cover All Ones I](https://leetcode.com/problems/find-the-minimum-area-to-cover-all-ones-i/)

### Description

You are given a 2D binary array grid. Find a rectangle with horizontal and vertical sides with the smallest area, such that all the 1's in grid lie inside this rectangle.

Return the minimum possible area of the rectangle.


## Constraints

- 1 <= grid.length, grid[i].length <= 1000
- grid[i][j] is either 0 or 1.
- The input is generated such that there is at least one 1 in grid.
  
## Examples

### Example 1
Input: grid = [[0,1,0],[1,0,1]]

Output: 6

Explanation:

<img width="279" height="198" alt="image" src="https://github.com/user-attachments/assets/65d8abe8-15fb-408e-bd8d-332328354095" />


The smallest rectangle has a height of 2 and a width of 3, so it has an area of 2 * 3 = 6.
