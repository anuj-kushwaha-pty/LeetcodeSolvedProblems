class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return true;

            // Handle duplicates
            if (nums[start] == nums[mid] && nums[end] == nums[mid]) {
                start++;
                end--;
            }

            // Left half is sorted
            else if (nums[start] <= nums[mid]) {
                if (nums[start] <= target && target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }

            // Right half is sorted
            else {
                if (nums[mid] < target && target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
        }

        return false;
    }
};

/*class Solution {
public:
    // Modified to handle duplicates
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } 
            else if (nums[mid] < nums[e]) {
                e = mid;
            } 
            else {
                // nums[mid] == nums[e], cannot decide the side, reduce search space
                e--;
            }
        }

        return s;
    }

    int binarySearch(vector<int>& nums, int start, int end, int target) {
        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                start = mid + 1;
            else
                end = mid - 1;
        }
        return -1;
    }

    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findMin(nums);

        //if array is not rotated
        if(pivot == 0){
            return binarySearch(nums,0,n-1,target) != -1;
        }

        //check in both the halves
        if (binarySearch(nums, pivot, n - 1, target) != -1 ||
            binarySearch(nums, 0, pivot - 1, target) != -1) {
            return true;
        }

        return false;
    }
};

this method will not work in case--
nums =
[1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,1,1,1,1]
target =
2

because we are trying to find the smallest element, which is 1 — but the entire array is flooded with 1s, so pivot detection becomes ambiguous.
*/

