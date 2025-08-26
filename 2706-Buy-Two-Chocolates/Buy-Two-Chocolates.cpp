class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int Min = INT_MAX, SecondMin = INT_MAX;
        for(int price : prices){
            if(price < Min){
                SecondMin = Min;
                Min = price;
            }
            else SecondMin = min(SecondMin, price);
        }
        if(Min + SecondMin > money) return money;
        else return money - (Min + SecondMin);
    }
};