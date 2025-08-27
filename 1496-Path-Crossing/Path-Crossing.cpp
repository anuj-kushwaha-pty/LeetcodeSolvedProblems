class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int,int>> visited;
        int x = 0, y = 0;
        visited.insert({0,0});
        for(char c : path){
            if(c == 'N') x++;
            else if(c == 'S') x--;
            else if(c == 'E') y++;
            else if(c == 'W') y--;

            if(visited.count({x,y})) return true;
            visited.insert({x,y});
        }
        return false;
    }
};