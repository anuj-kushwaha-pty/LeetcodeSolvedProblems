class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k > 1){
            sort(s.begin(), s.end());
            return s;
        }
        string result = s;
        int n = s.length();
        while(n--){
            char ch = s[0];
            s.erase(0,1);
            s.push_back(ch);
            result = min(result,s);
        }
        return result;
    }
};