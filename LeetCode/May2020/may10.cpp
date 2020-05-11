/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3325/
    Find the Town Judge  */

class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        map<int,int> find;
        map<int,int> t;
        int judge=-1;
        if(N==1)
            return 1;
        for(int i=0;i<trust.size();i++)
        {
            if(find[trust[i][0]]>0)
                find.erase(trust[i][0]);
            t[trust[i][0]]++;
            if(!t[trust[i][1]])
                find[trust[i][1]]++;
        }
        if(find.size()==0)
            return -1;
        for(auto a=find.begin();a!=find.end();++a)
        {
            if(a->second==(N-1))
            {    
                judge=a->first;
                break;
            }
        }       
        return judge;
    }
};
