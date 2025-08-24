class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n= nums.size(), i = 0, CountZero = 0, MaxLen = 0;
        for(int j = 0; j<n; j++){
            if(nums[j] == 0) CountZero++;
            while(CountZero > 1){
                if(nums[i] == 0) CountZero--;
                i++;
            }
            MaxLen = max(MaxLen,j-i);
        }
        return MaxLen;
    }
};