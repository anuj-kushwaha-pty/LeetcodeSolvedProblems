class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> mp;
        for(auto& path : paths){
            string source = path[0];
            mp[source] = 1;

        }
        for(auto& path : paths){
            string destination = path[1];
            if(mp[destination] != 1) return destination;
        }
        return "";
    }
};