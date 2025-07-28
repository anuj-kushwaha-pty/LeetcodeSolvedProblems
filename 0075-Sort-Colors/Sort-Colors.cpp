//Three Pointer / Dutch National Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int left = 0, current = 0, right = nums.size()-1;
        while(current<=right){
            if(nums[current] == 0){
                swap(nums[left],nums[current]);
                left++;
                current++;
            }
            else if(nums[current] == 1){
                current++;  
            }
            else{//nums[current] = 2
                swap(nums[current],nums[right]);
                right--;
            }
        }

    }
};