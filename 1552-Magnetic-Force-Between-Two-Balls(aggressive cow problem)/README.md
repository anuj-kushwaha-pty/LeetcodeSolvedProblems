# [Magnetic Force Between Two Balls(agressive cow problem)](https://leetcode.com/problems/magnetic-force-between-two-balls/)

### Description

In the universe Earth C-137, Rick discovered a special form of magnetic force between two balls if they are put in his new invented basket. Rick has n empty baskets, the ith basket is at position[i], Morty has m balls and needs to distribute the balls into the baskets such that the minimum magnetic force between any two balls is maximum.

Rick stated that magnetic force between two different balls at positions x and y is |x - y|.

Given the integer array position and the integer m. Return the required force.

## Constraints

- n == position.length
- 2 <= n <= 105
- 1 <= position[i] <= 109
- All integers in position are distinct.
- 2 <= m <= position.length

## Examples

### Example 1
<img width="562" height="195" alt="image" src="https://github.com/user-attachments/assets/3efad212-a4c8-46bd-b3e2-652b7c1addc9" />

Input: position = [1,2,3,4,7], m = 3

Output: 3

Explanation: Distributing the 3 balls into baskets 1, 4 and 7 will make the magnetic force between ball pairs [3, 3, 6]. The minimum magnetic force is 3. We cannot achieve a larger minimum magnetic force than 3.
