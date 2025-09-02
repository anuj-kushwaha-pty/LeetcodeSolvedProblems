class Solution {
public:
    int firstUniqChar(string s) {
        int n = s.length();
        int array[26] = {0};
        for(char ch : s){
            array[ch-'a']++;
        }
        
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (array[ch - 'a'] == 1)
                return i;
        }
        return -1;
    }
};