/*https://leetcode.com/explore/featured/card/top-interview-questions-easy/97/dynamic-programming/572/
    Best Time to Buy and Sell Stock   */
    
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        int i=0,buy,sell,maxprofit=0,profit=0;
        buy=0;
        for(i=0;i<prices.size()-1;i++)
        {
            if(prices[i]>prices[i+1])
            {
                sell=i;
                profit=(prices[sell]-prices[buy]);
                if(profit>maxprofit)
                    maxprofit=profit;
                if(prices[i+1]<prices[buy])
                    buy=i+1;
            }
        }
        sell=i;
        profit=(prices[sell]-prices[buy]);
        if(profit>maxprofit)
            maxprofit=profit;
        return maxprofit;
    }
};
