class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice= INT_MAX; //to track the minimum price
        int maxProfit= 0; // to track the maximum profit

        for(int i =0; i<prices.size(); i++){
            if(prices[i]<minPrice){
                minPrice = prices[i];

            }

            else if(prices[i]-minPrice > maxProfit){
                maxProfit = prices[i] - minPrice;

            }

        }
        return maxProfit;
    }
};