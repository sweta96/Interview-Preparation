/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/110/sorting-and-searching/799/
    Top K Frequent Elements   */

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        map<int,int> freq;
        for(int i=0;i<nums.size();i++)
            freq[nums[i]]++;
        while(k>0)
        {
            int max=freq[nums[0]];
            int number=nums[0];
            for(auto a:freq)
            {
                if(a.second>max)
                {
                    max=a.second;
                    number=a.first;
                }
            }
            result.push_back(number);
            freq[number]=0;
            k--;
        }
        return result;
    }
};
