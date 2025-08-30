class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int n = s.length();
        int ans = -1;
        for(int i = 0; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                if(s[i] == s[j]){
                    int count = j-i-1;
                    ans = max(ans,count);
                }
            }
        }
        return ans;
    }
};