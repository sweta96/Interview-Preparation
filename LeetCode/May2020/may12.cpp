/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3327/
    Single Element in a Sorted Array  */

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int len=nums.size();
        int i=0;
        while(i<len-1)
        {
            if(nums[i]==nums[i+1])
                i=i+2;
            else
                return nums[i];
        }
        return nums[i];
        
    }
};
