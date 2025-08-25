# [Orderly Queue](https://leetcode.com/problems/orderly-queue/description/)

### Description

You are given a string s and an integer k. You can choose one of the first k letters of s and append it at the end of the string.

Return the lexicographically smallest string you could have after applying the mentioned step any number of moves.

## Constraints

- 1 <= k <= s.length <= 1000
- s consist of lowercase English letters.

## Examples

### Example 1
Input: s = "cba", k = 1

Output: "acb"

Explanation: 
In the first move, we move the 1st character 'c' to the end, obtaining the string "bac".
In the second move, we move the 1st character 'b' to the end, obtaining the final result "acb".
