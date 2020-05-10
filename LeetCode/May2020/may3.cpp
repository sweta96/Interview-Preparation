/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3318/
  Ransom Note  */

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int> rn,mg;
        int flag=1;
        for(int i=0;i<ransomNote.size();i++)
            rn[ransomNote[i]]++;
        for(int i=0;i<magazine.size();i++)
            mg[magazine[i]]++;
        for(auto r : rn)
        {
            if(mg[r.first]==0)
                return false;
            else if(mg[r.first]<r.second)
                return false;
        }
        return true;
    }
};
