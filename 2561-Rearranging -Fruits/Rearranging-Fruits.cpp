class Solution {
public:
    long long minCost(vector<int>& b1, vector<int>& b2) {
        unordered_map<int, int> c1, c2;
        int minVal = b1[0];

        for (int i = 0; i < b1.size(); i++) {
            c1[b1[i]]++;
            minVal = min(minVal, b1[i]);
        }
        for (int i = 0; i < b2.size(); i++) {
            c2[b2[i]]++;
            minVal = min(minVal, b2[i]);
        }

        vector<int> toSwap;

        for (auto it : c1) {
            int cost = it.first;
            int occ1 = it.second;
            int occ2 = c2[cost];
            int diff = abs(occ1 - occ2);

            if (diff % 2 == 1) return -1;// if odd it means it's not possible to make both equal

            if (occ1 > occ2) {
                for (int i = 0; i < diff / 2; i++) {
                    toSwap.push_back(cost);
                }
            }
        }

        for (auto it : c2) {
            int cost = it.first;
            int occ1 = c1[cost];
            int occ2 = it.second;
            int diff = abs(occ1 - occ2);

            if (diff % 2 == 1) return -1;// if odd it means it's not possible to make both equal

            if (occ2 > occ1) {
                for (int i = 0; i < diff / 2; i++) {
                    toSwap.push_back(cost);
                }
            }
        }

        sort(toSwap.begin(), toSwap.end());
        long long ans = 0;
        for (int i = 0; i < toSwap.size() / 2; i++) {
            ans += min(2LL * minVal, 1LL * toSwap[i]);
        }

        return ans;
    }
};
