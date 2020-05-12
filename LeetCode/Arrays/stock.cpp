/*  https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/564/
      Best Time to Buy and Sell Stock II   */

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,buy,sell,profit=0;
        buy=0;
        for(i=0;i<prices.size()-1;i++)
        {
            if(prices[i]>prices[i+1])
            {
                sell=i;
                profit+=(prices[sell]-prices[buy]);
                buy=i+1;
            }
        }
        sell=i;
        profit+=(prices[sell]-prices[buy]);
        return profit;
    }
};
