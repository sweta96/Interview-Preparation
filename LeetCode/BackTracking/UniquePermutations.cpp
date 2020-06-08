/* https://leetcode.com/problems/permutations-ii/submissions/
  47. Permutation II */

class Solution {
public:
    void permutation(vector<vector<int>>& result,vector<int> nums,map<int,int> visited,vector<int> res,map<vector<int>,int>& check)
    {
        if(!check[res])
        {
            check[res]=1;
            if(res.size()==nums.size())
            {
                result.push_back(res);
                return;
            }
        
            for(int i=0;i<nums.size();i++)
            {
                if(!visited[i])
                {
                    visited[i]=1;
                    res.push_back(nums[i]);
                    permutation(result, nums, visited, res,check);
                    visited[i]=0;
                    auto it =res.end();
                    it--;
                    res.erase(it);
                }
            }
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        map<vector<int>,int> check;
        if(nums.size()==0)
            return result;
        if(nums.size()==1)
        {
            result.push_back(nums);
            return result;
        }
        map<int,int> visited;
        vector<int> res;
        permutation(result, nums, visited, res,check);
        return result;
    }
};
