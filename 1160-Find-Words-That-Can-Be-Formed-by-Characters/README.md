# [Find Words That Can Be Formed by Characters](https://leetcode.com/problems/find-words-that-can-be-formed-by-characters/)

### Description

You are given an array of strings words and a string chars.

A string is good if it can be formed by characters from chars (each character can only be used once for each word in words).

Return the sum of lengths of all good strings in words..


## Constraints

- 1 <= words.length <= 1000
- 1 <= words[i].length, chars.length <= 100
- words[i] and chars consist of lowercase English letters.

## Examples

### Example 1
Input: words = ["cat","bt","hat","tree"], chars = "atach"

Output: 6

Explanation: The strings that can be formed are "cat" and "hat" so the answer is 3 + 3 = 6.

