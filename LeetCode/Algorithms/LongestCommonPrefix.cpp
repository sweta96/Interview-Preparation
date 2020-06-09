/* https://leetcode.com/problems/longest-common-prefix/submissions/
    14. Longest Common Prefix */

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix="",temp="";
        if(strs.size()==0)
            return prefix;
        prefix=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            string str=strs[i];
            temp="";
            int j=0;
            while(j<str.size() && str[j]==prefix[j])
            {
                temp+=str[j];
                j++;
            }
            prefix=temp;
            if(prefix=="")
                return prefix;;
        }
        return prefix;
    }
};
