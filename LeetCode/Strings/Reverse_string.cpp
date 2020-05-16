/*https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/879/
    Reverse String */

class Solution {
public:
    void reverseString(vector<char>& s) {
        int len=s.size();
        char temp;
        for(int i=0;i<len/2;i++)
        {
            temp=s[i];
            s[i]=s[len-1-i];
            s[len-1-i]=temp;
        }
    }
};
