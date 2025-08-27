# [Path Crossing](https://leetcode.com/problems/path-crossing/)

### Description

Given a string path, where path[i] = 'N', 'S', 'E' or 'W', each representing moving one unit north, south, east, or west, respectively. You start at the origin (0, 0) on a 2D plane and walk on the path specified by path.

Return true if the path crosses itself at any point, that is, if at any time you are on a location you have previously visited. Return false otherwise.



## Constraints

- 1 <= m, n <= 150
- mat[i][j] is either 0 or 1.

## Examples

### Example 1
<img width="732" height="656" alt="image" src="https://github.com/user-attachments/assets/a3564ff7-1e79-447b-abd2-ede2d4cf5f50" />

Input: path = "NES"

Output: false 

Explanation: Notice that the path doesn't cross any point more than once.
