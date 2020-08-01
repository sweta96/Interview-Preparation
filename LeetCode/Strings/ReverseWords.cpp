/* https://leetcode.com/problems/reverse-words-in-a-string-iii/submissions/
  557. Reverse Words in a String III   */

class Solution {
public:
    string reverse(string s)
    {
        string str="";
        for(int i=0;i<s.size();i++)
            str=s[i]+str;
        return str;
    }
    string reverseWords(string s) {
        string result="";
        string sub="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                sub+=s[i];
            else
            {
                result+=reverse(sub)+" ";
                sub="";
            }
        }
        if(sub!="")
            result+=reverse(sub);
        return result;
    }
};
