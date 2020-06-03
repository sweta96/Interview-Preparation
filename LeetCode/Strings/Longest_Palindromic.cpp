/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/103/array-and-strings/780/
  Longest Palindromic Substring   */

class Solution {
public:
    string longestPalindrome(string s) {
        int max =0,k,l,n;
        string longest="";
        n=s.size();
        for(int i=0;i<n;i++)
        {
            string str="";
            k=i-1;
            l=i+1;
            str=str+s[i];
            while(s[l-1]==s[l])
            {
                str=str+s[l++];
            }
            i=l-1;
            while(k>=0 && l<n)
            {
                if(s[k]==s[l])
                    str=s[k--]+str+s[l++];
                else
                    break;
            }
            if(str.size()>max)
            {
                max=str.size();
                longest=str;
            }
        }
        return longest;
    }
};
