/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/109/backtracking/796/
    SubSets   */

class Solution {
public:
    void permutation(map<vector<int>,int>& result,vector<int> nums,vector<int> res,int j)
    {
        if(res.size()<=nums.size() && res.size()!=0)
            result[res]=1;
        if(j>=nums.size())
            return;
        for(int i=j;i<nums.size();i++)
        {
            res.push_back(nums[i]);
            permutation(result, nums, res,i+1);
            auto it =res.end();
            it--;
            res.erase(it);
        }
        res.clear();
        res.push_back(nums[j]);
        permutation(result, nums, res,j+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        map<vector<int>,int> result;
        vector<vector<int>> results;
        vector<int> res;
        results.push_back(res);
        if(nums.size()==0)
            return results;
        if(nums.size()==1)
        {
            results.push_back(nums);
            return results;
        }
        permutation(result, nums, res,0);
        for(auto a:result)
            results.push_back(a.first);
        return results;
    }
};
