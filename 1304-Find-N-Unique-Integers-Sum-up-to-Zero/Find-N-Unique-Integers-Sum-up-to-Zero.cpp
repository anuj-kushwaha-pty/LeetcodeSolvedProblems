class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result(n);
        int i = 0, j = n-1, start = 1;
        while(i < j){
            result[i] = start;
            result[j] = -start;
            start++, i++, j--;
        }
        return result;
    }
};