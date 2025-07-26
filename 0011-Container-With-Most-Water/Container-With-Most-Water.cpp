class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0, rp = height.size() - 1;
        int maxWater = 0;

        while (lp < rp) {
            int h = min(height[lp], height[rp]);
            maxWater = max(maxWater, h * (rp - lp));
            // Move pointer with shorter height
            if (height[lp] < height[rp])
                ++lp;
            else
                --rp;
        }

        return maxWater;
    }
};
