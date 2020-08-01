/* Link to Question: https://leetcode.com/explore/featured/card/july-leetcoding-challenge/544/week-1-july-1st-july-7th/3377/
      Arranging Coins  */

class Solution {
public:
    int arrangeCoins(int n) {
        long int num=0;
        int it=0;
        for(long int i=1;i<=n;i++)
        {
            num+=i;
            if(num>n)
                return it;
            else if(num==n)
                return it+1;
            else
                it++;
        }
        return it;
    }
};
