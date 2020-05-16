/*https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/880/
    Reverse Integer  */

class Solution {
public:
    int reverse(int x) {
        int number,reverse,remainder;
        if(x<0)
        {
            if(x>=(INT_MAX*(-1)))
                number=x*(-1);
            else
                return 0;
        }
        else
            number=x;
        reverse=0;
        while(number!=0)
        {
            remainder=number%10;
            number=number/10;
            if(reverse<=(INT_MAX/10))
                reverse=(reverse*10) + remainder;
            else
                return 0;
        }
        if(x<0)
            reverse=reverse*(-1);
        return reverse;
    }
};
