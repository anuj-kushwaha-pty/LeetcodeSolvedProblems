class Solution {
public:
    bool isAnagram(string s, string t) {
       if(s.length() != t.length()) return false;

       unordered_map<char, int> freq;
       for(auto &ch : s){
        freq[ch]++;
       }
       for(auto &ch : t){
        freq[ch]--;
        if(freq[ch] < 0) return false;
       }
       return true;
    }
};