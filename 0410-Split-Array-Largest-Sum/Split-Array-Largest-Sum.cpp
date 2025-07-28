// Book Allocation Problem or Minimum Number of Pages
class Solution {
public:
    
    bool isPossible(vector<int>& nums, int k, int mid){
        int studentCount = 1, pageSum = 0, n = nums.size();
        for(int i=0; i<n; i++){
            if(pageSum + nums[i]<=mid){
                pageSum += nums[i];
            }
            else{
                studentCount++;
                if(studentCount > k || nums[i]>mid){
                    return false;
                }
                pageSum = nums[i];
            }
            if(studentCount > k){
                return false;
            }

        }
        return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int start = 0, n = nums.size(), sum = 0;

        for(int i=0; i<n; i++){
            sum +=nums[i];
        }
        int end = sum, ans = -1, mid = start+(end-start)/2;

        while(start<=end){
            if(isPossible(nums, k, mid)){
                ans = mid;
                end = mid-1;
            }
            else{
                start = mid +1;

            }
            mid = start+(end-start)/2;
        } 
        return ans;
        
    }
};