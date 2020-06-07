/*   https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/submissions/
      80. Remove Duplicates from Sorted Array II  */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int count=1;
        int val=nums[0];
        auto i=nums.begin();
        i++;
        while(i!=nums.end())
        {
            if(*i==val)
            {
                count++;
                if(count>2)
                {
                    nums.erase(i);
                }
                else
                    i++;
            }
            else
            {
                count=1;
                val=*i;
                i++;
            }
        }
        return nums.size();
    }
};
