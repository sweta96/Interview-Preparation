/* https://leetcode.com/problems/length-of-last-word/
  58. Length of Last Word  */

class Solution {
public:
    int lengthOfLastWord(string s) {
        string lastword="";
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            if(s[i]!=' ')
                lastword+=s[i];
            else
            {
                if(i!=n-1 && s[i+1]!=' ')
                    lastword="";
                else
                {
                    while(i<n-1 && s[i+1]==' ')
                    {
                        i++;
                    }
                    if(i!=n-1)
                        lastword="";
                }
            }
        }
        return lastword.size();
    }
};
