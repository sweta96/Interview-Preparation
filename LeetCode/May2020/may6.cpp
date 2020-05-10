/*https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/534/week-1-may-1st-may-7th/3321/
    Majority Element   */

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> freq;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
            if(freq[nums[i]]>(n/2))
                return nums[i];
        }
        return -1;
    }
};
