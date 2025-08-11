class Solution {
public:

     int getcount(int n){
        int num = 0;
        while(n){
            num += pow(10, n%10);
            n/= 10;
        }
        return num;
     }
    bool reorderedPowerOf2(int n) {
        int input = getcount(n);
        for(int p = 0; p<=29; ++p){
            if(input == getcount(1 << p)){ // 1<<p = 2^p
                return true;
            }
        }
        return false;
        
    }
};