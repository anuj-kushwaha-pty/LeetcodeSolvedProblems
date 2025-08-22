class Solution {
public:

    int OneDArrayCount(vector<int>& vec){
        int cons = 0, subcount = 0;
        for(int &val : vec){
            if(val == 0) cons = 0;
            else cons++;
            subcount += cons;
        }
        return subcount;
    }
    int numSubmat(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), result = 0;

        for(int StartRow = 0; StartRow < m; StartRow++){
            vector<int> vec(n,1);
            for(int EndRow = StartRow; EndRow < m; EndRow++){
                for(int col = 0; col < n; col++){
                    vec[col] = vec[col] & mat[EndRow][col];
                }
                result += OneDArrayCount(vec);
            }
            
        }
        return result;

    }
};