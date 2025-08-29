class Solution {
public:
    long long flowerGame(int n, int m) {
        //alice will only win when the x+y = odd and for that odd+even is always gives us odd
        // it means we have 2 possiblities whether x is odd and y is even or x is even and y is odd

        return 1LL* ((n+1)/2) * (m/2) + 1LL* (n/2) * ((m+1)/2);

    }
};