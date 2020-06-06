/*   https://leetcode.com/explore/interview/card/top-interview-questions-medium/109/backtracking/795/
      Permutation   */

class Solution {
public:
    void permutation(vector<vector<int>>& result,vector<int> nums,map<int,int> visited,vector<int> res)
    {
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
                permutation(result, nums, visited, res);
                visited[i]=0;
                auto it =res.end();
                it--;
                res.erase(it);
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()==0)
            return result;
        if(nums.size()==1)
        {
            result.push_back(nums);
            return result;
        }
        map<int,int> visited;
        vector<int> res;
        permutation(result, nums, visited, res);
        return result;
    }
};
