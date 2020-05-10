/*https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3320/
     First Unique Character in a String   */

class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int> non;
        int min=s.size()+1;
        for(int i=0;i<s.size();i++)
        {
            if(!non[s[i]])
                non[s[i]]=i+1;
            else
                non[s[i]]=s.size()+1;
        }
        for(auto a=non.begin();a!=non.end();++a)
        {
            if(a->second<min)
                min=a->second;
        }
        if(min==s.size()+1)
            return -1;
        return min-1;
    }
};
