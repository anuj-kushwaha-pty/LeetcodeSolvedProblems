class Solution {
public:

    int firstOcc(vector<int>& nums, int target){
        int start= 0, end = nums.size()-1, ans = -1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                ans = mid;
                end = mid - 1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }

        }
        return ans;
    }
    int lastOcc(vector<int>& nums, int target){
        int start= 0, end = nums.size()-1, ans = -1;
        
        while(start<=end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                ans = mid;
                start = mid + 1;
            }
            else if(nums[mid]>target){
                end = mid-1;
            }
            else if(nums[mid]<target){
                start = mid + 1;
            }

        }
        return ans;    

    }

    vector<int> searchRange(vector<int>& nums, int target) {
        return{firstOcc(nums,target), lastOcc(nums,target)};
    }
};