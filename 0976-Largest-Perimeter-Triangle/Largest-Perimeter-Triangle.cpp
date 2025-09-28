class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for(int i = n-1; i >=2; i--){
            int a = nums[i-2], b = nums[i-1], c = nums[i];
            if(a + b > c) return a + b + c;
        }
        return 0;
    }
};