class Solution {
public:
    int findDuplicate(vector<int>& nums) {
         int ans = -1;
        for(int i=0; i<nums.size();i++){
            int index = abs(nums[i]);
            if(nums[index]<0){
                ans=index;
                break;
            }
                nums[index] *=-1;
        }
        return ans;
    }
};

/*For nums = [1, 3, 4, 2, 2]:

i=0 → index = 1 → mark nums[1] negative → nums = [1, -3, 4, 2, 2]

i=1 → index = 3 → mark nums[3] negative → nums = [1, -3, 4, -2, 2]

i=2 → index = 4 → mark nums[4] negative → nums = [1, -3, 4, -2, -2]

i=3 → index = 2 → mark nums[2] negative → nums = [1, -3, -4, -2, -2]

i=4 → index = 2 → nums[2] is already negative → duplicate found → return 2
*/
