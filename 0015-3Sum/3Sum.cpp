class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int n = nums.size();
        
        for(int  i = 0; i < n; i++){
           if(i > 0 && nums[i] == nums[i-1]) continue;
           int start = i+1, end = n-1;
           while(start < end){
            long sum = (long)nums[i] + nums[start] + nums[end];
            if(sum == 0){
                ans.push_back({nums[i], nums[start], nums[end]});
                while(start < end && nums[start] == nums[start+1]) start++;
                while(start < end && nums[end] == nums[end-1]) end--;
                start++;
                end--;

            }
            else if(sum < 0) start++;
            else end--;
           }
        }
        return ans;
    }
};