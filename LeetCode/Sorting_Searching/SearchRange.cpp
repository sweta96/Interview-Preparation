/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/110/sorting-and-searching/802/
    Search for a Range  */

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result;
        result.push_back(-1);
        result.push_back(-1);
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==target)
            {
                result[0]=i;
                while(i<nums.size() && nums[i]==target)
                {
                    i++;
                }
                result[1]=i-1;
                return result;
            }
        }
        return result;
    }
};
