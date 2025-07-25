class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct = nums[0];
        int minProduct = nums[0];
        int ans = nums[0];

        for(int i=1; i<nums.size(); i++){
            if(nums[i]<0){
                swap(maxProduct,minProduct);
            }
            maxProduct = max(nums[i],maxProduct*nums[i]);
            minProduct = min(nums[i],minProduct*nums[i]);

            ans = max(ans,maxProduct);

        }
        return ans;
        
    }
};