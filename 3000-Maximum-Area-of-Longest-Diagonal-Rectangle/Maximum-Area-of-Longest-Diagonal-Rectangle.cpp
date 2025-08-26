class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int n = dimensions.size(), Maxdiag = 0, Maxarea = 0;
        for(int i = 0; i < n; i++){
            int length = dimensions[i][0], width = dimensions[i][1];
            int diag = length*length + width*width, area = length*width;
        
            if(diag > Maxdiag){
                Maxdiag = diag;
                Maxarea = area;
            }
            if(diag == Maxdiag) Maxarea = max(Maxarea, area);
        }
        return Maxarea;
    }
};