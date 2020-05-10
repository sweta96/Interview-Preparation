/*https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3317/
    Jewels and Stones  */

class Solution {
public:
    int numJewelsInStones(string J, string S) {
        map<char,int> jewels;
        int count=0;
        for(int i=0;i<J.size();i++)
        {
            jewels[J[i]]++;
        }
        for(int i=0;i<S.size();i++)
        {
            if(jewels[S[i]])
                count++;
        }
        return count;
    }
};
