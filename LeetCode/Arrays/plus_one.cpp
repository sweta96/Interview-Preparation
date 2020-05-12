/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/559/
    Plus One   */

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]<9)
            {
                digits[i]+=1;
                return digits;
            }
            else
            {
                digits[i]=0;
                if(i==0)
                {
                    digits.insert(digits.begin(),1);
                    return digits;
                }
            }  
        }
        return digits;
    }
};
