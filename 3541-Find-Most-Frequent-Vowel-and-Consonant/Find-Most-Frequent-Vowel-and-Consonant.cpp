class Solution {
public:
    int maxFreqSum(string s) {
        int maxVowel = 0, maxCons = 0;
        unordered_map<char,int> mp;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                mp[s[i]]++;
                maxVowel = max(maxVowel, mp[s[i]]);
            }
            else{
                mp[s[i]]++;
                maxCons = max(maxCons, mp[s[i]]);
            }
        }
        return maxVowel + maxCons;
    }
};