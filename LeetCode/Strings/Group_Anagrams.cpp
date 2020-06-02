/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/103/array-and-strings/778/
  Group Anagrams   */

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<vector<string>> result(n);
        int k=0;
        map<string,int> track;
        for(int i=0;i<n;i++)
        {
            string s = strs[i];
            sort(s.begin(),s.end());
            if(!track[s])
            {
                result[k++].push_back(strs[i]);
                track[s]=k;
            }
            else
            {
                int j=track[s]-1;
                result[j].push_back(strs[i]);
            }
        }
        vector<vector<string>> final(k);
        for(int i=0;i<k;i++)
        {
            final[i]=result[i];
        }
        return final;
    }
};
