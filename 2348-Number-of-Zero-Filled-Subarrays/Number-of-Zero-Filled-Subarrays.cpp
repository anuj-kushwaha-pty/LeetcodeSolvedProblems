class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long result = 0;
        int n = nums.size(), count = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0) count++;
            else count = 0;
            result = result + count;
        }
        return result;
    }
};