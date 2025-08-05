class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {
        int n = fruits.size(); //size of fruits and baskets are same
        set<int> st;
        for(int i = 0; i<n; i++){
            for(int j = 0; j<n; j++){
                if (st.count(j) > 0) {
                     continue;
                }
            
                else if(fruits[i]<=baskets[j]){
                    st.insert(j);
                    break;
                }
            }
        }
        return n - st.size();
    }
};