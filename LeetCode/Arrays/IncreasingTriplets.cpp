/*  https://leetcode.com/explore/interview/card/top-interview-questions-medium/103/array-and-strings/781/
    Increasing Triplets Subsequence  */

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3)
            return false;
        int small = nums[0];
        int big = INT_MAX;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>small)
            {
                if(nums[i]<big)
                    big=nums[i];
                else if(nums[i]>big)
                    return true;
            }
            else if(nums[i]<small)
                small=nums[i];
        }
        return false;
    }
};
