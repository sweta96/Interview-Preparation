/* https://leetcode.com/problems/max-consecutive-ones/
  485. Max Consecutive Ones  */
 
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max=0,num1=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==1)
                num1++;
            else
                num1=0;
            if(num1>max)
                max=num1;
        }
        return max;
    }
};
