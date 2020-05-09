/*https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3324/
    Valid Perfect Square  */

class Solution {
public:
    bool isPerfectSquare(int num) {
        int n;
        n=num%10;
        if(n==0||n==1||n==4||n==5||n==6||n==9)
        {
            for(int i=1;i*i<=num;i++)
            {
                if(num%i==0&&num/i==i)
                    return true;
            }
        }
        return false;
    }
};
