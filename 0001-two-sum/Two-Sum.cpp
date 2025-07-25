class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<pair<int, int>> numWithIndex;

        // Store value with original index
        for (int i = 0; i < n; i++) {
            numWithIndex.push_back({nums[i], i});
        }

        // Sort by value
        sort(numWithIndex.begin(), numWithIndex.end());

        int i = 0, j = n - 1;
        while (i < j) {
            int sum = numWithIndex[i].first + numWithIndex[j].first;
            if (sum == target) {
                return {numWithIndex[i].second, numWithIndex[j].second};
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }

        return {}; // Should not reach here if one solution always exists
    }
};
