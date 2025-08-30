# [Valid Sudoku](https://leetcode.com/problems/valid-sudoku/)

### Description

Determine if a 9 x 9 Sudoku board is valid. Only the filled cells need to be validated according to the following rules:

1. Each row must contain the digits 1-9 without repetition.
2. Each column must contain the digits 1-9 without repetition.
3. Each of the nine 3 x 3 sub-boxes of the grid must contain the digits 1-9 without repetition.
   
Note:

- A Sudoku board (partially filled) could be valid but is not necessarily solvable.
- Only the filled cells need to be validated according to the mentioned rules.


## Constraints

- board.length == 9
- board[i].length == 9
- board[i][j] is a digit 1-9 or '.'.

## Examples

### Example 1

<img width="250" height="250" alt="image" src="https://github.com/user-attachments/assets/4671a341-84f4-42bc-a385-781afc2c8a1a" />

Input: board = 

[["5","3",".",".","7",".",".",".","."]

,["6",".",".","1","9","5",".",".","."]

,[".","9","8",".",".",".",".","6","."]

,["8",".",".",".","6",".",".",".","3"]

,["4",".",".","8",".","3",".",".","1"]

,["7",".",".",".","2",".",".",".","6"]

,[".","6",".",".",".",".","2","8","."]

,[".",".",".","4","1","9",".",".","5"]

,[".",".",".",".","8",".",".","7","9"]]

Output: true
