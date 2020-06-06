/*  https://leetcode.com/explore/interview/card/top-interview-questions-medium/110/sorting-and-searching/801/
    Find Peak Element   */

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                if(i==nums.size()-1)
                    return i;
                else if(nums[i+1]<nums[i])
                    return i;
                else
                    max=nums[i];
            }
        }
        return 0;
    }
};
