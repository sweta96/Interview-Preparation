/*https://leetcode.com/explore/featured/card/top-interview-questions-easy/127/strings/883/
    Valid Palindrome  */

class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.size();
        if(len==0)
            return true;
        string s_modified="",s_reverse="";
        char c;
        for(int i=0;i<len;i++)
        {
            c=s[i];
            if((c>='a'&&c<='z')||(c>='0'&&c<='9'))
                s_modified+=c;
            else if(c>='A'&&c<='Z')
                s_modified+=tolower(c);
        }
        int s_len=s_modified.size();
        for(int i=s_len-1;i>=0;i--)
            s_reverse+=s_modified[i];
        if(s_modified==s_reverse)
            return true;
        else
            return false;
    }
};
