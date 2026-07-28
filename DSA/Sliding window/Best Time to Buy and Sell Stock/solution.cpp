class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxIncome = 0;
        int buy = prices[0];

        for (int i = 0 ; i<prices.size() ; i++){
            buy = min (buy,prices[i]);
            maxIncome = max(maxIncome,prices[i]-buy);

        }
        return maxIncome;
    }
};
