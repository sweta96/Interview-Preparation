/* https://leetcode.com/explore/featured/card/june-leetcoding-challenge/539/week-1-june-1st-june-7th/3350/
      Reverse String   */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int n=s.size();
        for(int i=0,j=n-1;i<n/2;i++,j--)
        {
            char ch=s[i];
            s[i]=s[j];
            s[j]=ch;
        }
    }
};
