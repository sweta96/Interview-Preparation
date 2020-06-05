/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/111/dynamic-programming/809/
    Coin Change  */

class Solution {
public:
    int min(int a,int b)
    {
        if(b==0)
            return a;
        return (a<b)?a:b;
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount==0)
            return 0;
        int n=coins.size();
        int array[n+1][amount+1];
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=amount;j++)
                array[i][j]=0;
        }
        sort(coins.begin(),coins.end());
        for(int i=1;i<=n;i++)
        {
            int val=coins[i-1];
            for(int j=1;j<=amount;j++)
            {
                if(j==val)
                    array[i][j]=1;
                else if(j>val)
                {
                    if(array[i][j-val]>0)
                        array[i][j]=min(array[i][j-val]+1,array[i-1][j]);
                    else
                        array[i][j]=array[i-1][j];
                }
                else
                    array[i][j]=array[i-1][j];
            }
        }
        if(array[n][amount]==0)
            return -1;
        return array[n][amount];
    }
};
