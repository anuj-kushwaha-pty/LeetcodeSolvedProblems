class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int index=0;
        int n=intervals.size();
        vector<vector<int>> ans;
        //Add all non-overlapping intervals before the new one
        while(index<n and intervals[index][1]<newInterval[0]){
            ans.push_back(intervals[index++]);
        }
        //Merge All Overlapping Intervals
        //update the newInterval start to the minimum and newInterval end to the maximum
        while(index<n and newInterval[1]>=intervals[index][0]){
            newInterval[0]=min(newInterval[0],intervals[index][0]);
            newInterval[1]=max(newInterval[1],intervals[index][1]);
            index++;

        }
        //push that to the ans
        ans.push_back(newInterval);
        //insert the remaining intervals
        while(index<n){
            ans.push_back(intervals[index++]);

        }
        return ans;
        
    }
};