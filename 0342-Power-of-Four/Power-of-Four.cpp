class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0) return 0;
        if( (n & (n-1)) == 0 && (n-1) % 3 == 0) return true;
        // n&(n-1) == power of 2
        return false;
    }
};