/*  https://leetcode.com/explore/interview/card/top-interview-questions-medium/103/array-and-strings/779/
    Longest Substring Without Repeating Characters    */

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int max=0,count=0,k=0;
        map<char,int> check;
        for(int i=0;i<s.size();i++)
        {
            char ch=s[i];
            if(!check[ch]||check[ch]<k)
            {
                count++;
                check[ch]=(i+1);
            }
            else
            {
                if(count>max)
                    max=count;
                count=i-check[ch]+1;
                k=check[ch];
                check[ch]=(i+1);
            }
        }
        if(count>max)
            max=count;
        return max;
    }
};
