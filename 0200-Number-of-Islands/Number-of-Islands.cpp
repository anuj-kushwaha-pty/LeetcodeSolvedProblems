class Solution {
public:
    void dfs(vector<vector<char>>& grid, int i, int j, int m, int n){
        if(i<0 || j<0 || i>=m || j>=n || grid[i][j] == '0') return;

        grid[i][j] = '0'; //visited

        vector<pair<int,int>> direction = {{-1,0},{1,0},{0,-1},{0,1}}; //direction vector

        for(auto[dx,dy] : direction){
            dfs(grid, i+dx, j+dy, m, n);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), count = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] == '1'){ //found an island
                    count++;
                    dfs(grid,i,j,m,n);
                } 

            }
        }
        return count;
    }
};
