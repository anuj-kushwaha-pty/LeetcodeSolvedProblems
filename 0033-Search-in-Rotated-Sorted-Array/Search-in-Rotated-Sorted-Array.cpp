class Solution {
public:
//finding pivot element
    int findMin(vector<int>& nums) {
        int s = 0, e = nums.size() - 1;

        while (s < e) {
            int mid = s + (e - s) / 2;

            if (nums[mid] > nums[e]) {
                s = mid + 1;
            } else {
                e = mid;
            }
        }

        return s;
    }
//doing binary search
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

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int pivot = findMin(nums);

        if (target >= nums[pivot] && target <= nums[n - 1]) {//this will check that target is in 2nd line
            return binarySearch(nums, pivot, n - 1, target);
        } else {//else target in 1st line
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};
