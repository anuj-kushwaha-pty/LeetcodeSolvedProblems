class Solution {
public:
    bool makeEqual(vector<string>& words) {
       unordered_map<char, int> freq;
       int n = words.size();
       for(string s : words){
        for(char c : s){
            freq[c]++;
        }
       }
        for(auto &it : freq){
            if(it.second % n != 0) return false;
        }
        return true;
    }
};

