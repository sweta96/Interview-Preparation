/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/578/
    Contains Duplicate   */

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        map<int,int> frequency;
        for(int i=0;i<nums.size();i++)
        {
            if(frequency[nums[i]])
                return true;
            else
                frequency[nums[i]]++;
        }
        return false;
    }
};
