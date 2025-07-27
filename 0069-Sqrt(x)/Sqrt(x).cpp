class Solution {
public:

    long long binarySearch(int n){
        long long int s = 0, e = n, mid = s+(e-s)/2, ans = -1;
        while(s<=e){
            long long int sqr = mid*mid;

            if(sqr == n){
                return mid;
            }
            else if(sqr<n){
                ans = mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid = s+(e-s)/2;

        }
        return ans;
        
    }

    int mySqrt(int x) {
        return binarySearch(x);

        
    }
};