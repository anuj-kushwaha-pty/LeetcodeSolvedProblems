class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> megaset;
        for (int i = 0; i < nums.size(); i++) {
            // we will store the numbers in the set we have already visited
            // check to see if there was a match
            if (megaset.count(nums[i])) {
                return true;
            }
            // if we don't see a match, then we therefore put the element we visit into the set
            megaset.insert(nums[i]);
        }
        return false;
    }
};