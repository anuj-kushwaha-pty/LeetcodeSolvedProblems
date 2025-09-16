class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map<char,int> mp;
        for(char c : brokenLetters) mp[c]++;
        int ans = 0, f = 0;
        for(int i = 0; i < text.size(); i++){
            if(mp[text[i]] > 0) f = 1;
            if(text[i] == ' ' || i == text.size()-1) {
                if(f == 0) ans++;
                f = 0;
            }
        }
        return ans;
    }
};