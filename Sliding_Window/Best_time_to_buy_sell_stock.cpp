// Best time to buy and sell stock leetcode
// Two pointer approach
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit = 0;
        int l = 0;
        int r = 1;
        
        while(r < prices.size()){
            
            if(prices[r] > prices[l]){
                int current_profit = prices[r] - prices[l];
                max_profit = max(max_profit, current_profit);
            }else{
                l = r;
            }
            r ++;
        }
        return max_profit;
    }
};