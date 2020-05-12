/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/727/
    Remove Duplicates from Sorted Array   */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return 1;
        auto it=nums.begin()+1;
        while(it !=nums.end())
        {
            if(*it==*(it-1))
                nums.erase(it);
            else
                it++;
        }
        return nums.size();
    }
};
