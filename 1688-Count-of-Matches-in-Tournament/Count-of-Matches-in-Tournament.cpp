class Solution {
public:
    int numberOfMatches(int n) {
        return n-1; // Because winner can be only 1 and to get 1 winner we need (n-1) matches
    }
};