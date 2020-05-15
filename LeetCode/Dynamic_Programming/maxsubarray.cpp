/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/97/dynamic-programming/566/
  Maximum Subarray  */

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum,max,len;
        len=nums.size();
        sum=nums[0];
        max=nums[0];
        for(int j=1;j<len;j++)
        {
            if(nums[j]> sum && (max < 0 || sum<0))
                sum=nums[j];
            else
                sum=sum+nums[j];
            if(sum>max)
                max=sum;
            else if(sum<0)
            {
                sum=nums[j];
            }
        }
        if(sum>max)
            max=sum;
        return max;
    }
};
