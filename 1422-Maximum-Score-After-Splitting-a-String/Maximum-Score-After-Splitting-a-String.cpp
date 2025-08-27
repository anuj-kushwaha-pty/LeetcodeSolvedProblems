class Solution {
public:
    int maxScore(string s) {
        int n = s.length(), ans = 0, totalones = 0;

        for(char c : s){
            if(c == '1') totalones++;
        }
        int countzero = 0, countone = totalones;
        for(int i = 0; i < n-1; i++){
            if(s[i] == '0') countzero++;
            else countone--;
            ans = max(countzero + countone, ans);
        }
        return ans;
        
    }
};