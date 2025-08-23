class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> RowCount(m,0);
        vector<int> ColCount(n,0);

        for(int i = 0; i<m; i++){
            for(int j= 0; j<n; j++){
                if(mat[i][j] == 1){
                    RowCount[i]++;
                    ColCount[j]++;
                }
            }
        }

        int result = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(mat[i][j] == 1 && RowCount[i] == 1 && ColCount[j] == 1) result++;
            }
        }
        return result;
    }
};