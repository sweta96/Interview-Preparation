/* https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/528/week-1/3286/
    Move Zeros   */

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto i=nums.begin();
        int count=0;
        while(i!=(nums.end()-count))
        {
            if(*i==0)
            {
                nums.erase(i);
                nums.push_back(0);
                count++;
            }
            else
                i++;
        }
    }
};
