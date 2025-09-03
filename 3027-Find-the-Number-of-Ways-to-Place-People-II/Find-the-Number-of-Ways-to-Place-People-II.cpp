class Solution {
public:
    int numberOfPairs(vector<vector<int>>& points) {
        int n = points.size(), result = 0;

        auto lamda = [](vector<int> &point1, vector<int> &point2){
            if(point1[0] == point2[0]) return point1[1] > point2[1];
            else return point1[0] < point2[0];  
        };
        sort(points.begin(), points.end(), lamda);

        for(int i = 0; i < n; i++){
            int x1 = points[i][0];
            int y1 = points[i][1];

            int maxY = INT_MIN;     
            for(int j = i+1; j < n; j++){
                int x2 = points[j][0];
                int y2 = points[j][1];

               if(y2 > y1) continue;
               if(y2 > maxY){
                result++;
                maxY = y2;
               }
            }
        }
        return result;
    }
};