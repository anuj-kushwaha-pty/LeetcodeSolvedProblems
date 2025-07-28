//Aggressive Cows Problem
class Solution {
public:
    // Check if it's possible to place m cows with at least 'dist' between them
    bool isPossible(vector<int>& position, int m, int mid) {
        int count = 1;
        int last = position[0];

        for (int i = 1; i < position.size(); i++) {
            if (position[i] - last >= mid) {
                count++;
                last = position[i];
                if (count == m) return true;
            }
        }

        return false;
    }

    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(), position.end());

        int start = 1;  // minimum distance between cows
        int end = position.back() - position.front();  // max possible distance
        int ans = 0;

        while (start <= end) {
            int mid = start + (end - start) / 2;

            if (isPossible(position, m, mid)) {
                ans = mid;
                start = mid + 1;  // try for a bigger minimum distance
            } else {
                end = mid - 1; // reduce distance
            }
        }

        return ans;
    }
};
