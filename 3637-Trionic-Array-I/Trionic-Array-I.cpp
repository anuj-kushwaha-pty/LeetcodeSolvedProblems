class Solution {
public:
    
    bool IsIncreasing(const vector<int>& nums, int start, int end){
        for(int i = start; i < end; i++){
            if(nums[i] >= nums[i+1]) return false;
        }
        return true;
    }

    
    bool IsDecreasing(const vector<int>& nums, int start, int end){
        for(int i = start; i < end; i++){
            if(nums[i] <= nums[i+1]) return false;
        }
        return true;
    }

    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        for (int p = 1; p < n - 2; p++) {
            //taking 3 segments
            for (int q = p + 1; q < n - 1; q++) {
                if (IsIncreasing(nums, 0, p) &&
                    IsDecreasing(nums, p, q) &&
                    IsIncreasing(nums, q, n - 1)) {
                    return true;
                }
            }
        }
        return false;        
    }
};
