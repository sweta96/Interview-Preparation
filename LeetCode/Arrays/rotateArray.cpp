/*https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/646/
    Rotate Array  */

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len=nums.size();
        int temp;
        for(int i=1;i<=k;i++)
        {
            temp=nums[len-1];
            auto it=nums.end()-1;
            nums.erase(it);
            nums.insert(nums.begin(),temp);       
        }
    }
};
