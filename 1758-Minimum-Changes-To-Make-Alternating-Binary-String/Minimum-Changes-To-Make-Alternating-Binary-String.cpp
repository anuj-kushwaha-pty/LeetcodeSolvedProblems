class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int start_zero = 0, start_one = 0;
        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(s[i] == '1') start_zero++;
            }
            else{
                if(s[i] == '0') start_zero++;
            }
        }
        start_one = n-start_zero;
        return min(start_zero, start_one);
    }
};