class Solution {
public:
    double myPow(double x, int n) {
        //corner cases
        if(n == 0) return 1.0;
        if(x == 0) return 0.0;
        if(x == 1) return 1.0;
        if(x == -1 && n%2 == 0) return 1.0;
        if(x == -1 && n%2 != 0) return -1.0;

        //main code
        long binaryform = n;
        if(n<0){
            x=1/x;
            binaryform = -binaryform;
        }

        double ans = 1;
        
        while(binaryform>0){
            if(binaryform %2 == 1){
                ans*=x;
            }
            x*=x;
            binaryform /=2;

        }
        return ans;
    }
};