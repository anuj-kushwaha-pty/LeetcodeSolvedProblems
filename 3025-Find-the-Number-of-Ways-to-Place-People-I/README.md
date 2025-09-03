# [Find the Number of Ways to Place People I](https://leetcode.com/problems/find-the-number-of-ways-to-place-people-i/)

### Description

You are given a 2D array points of size n x 2 representing integer coordinates of some points on a 2D plane, where points[i] = [xi, yi].

Count the number of pairs of points (A, B), where

A is on the upper left side of B, and
there are no other points in the rectangle (or line) they make (including the border).
Return the count.


## Constraints

- 2 <= n <= 50
- points[i].length == 2
- 0 <= points[i][0], points[i][1] <= 50
- All points[i] are distinct.
  
## Examples

### Example 1
Input: points = [[6,2],[4,4],[2,6]]

Output: 2

Explanation:

<img width="1321" height="365" alt="image" src="https://github.com/user-attachments/assets/644ba657-5400-4025-9ceb-722d0c19c516" />


The left one is the pair (points[1], points[0]), where points[1] is on the upper left side of points[0] and the rectangle is empty.
The middle one is the pair (points[2], points[1]), same as the left one it is a valid pair.
The right one is the pair (points[2], points[0]), where points[2] is on the upper left side of points[0], but points[1] is inside the rectangle so it's not a valid pair.
