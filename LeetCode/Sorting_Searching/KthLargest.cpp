/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/110/sorting-and-searching/800/
    Kth Largest Element in an Array

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        map<int, int> freq;
        for(int i=0;i<nums.size();i++)
        {
            freq[nums[i]]++;
        }
        int i=0;
        int n=nums.size();
        k=n-k+1;
        for(auto a: freq)
        {
            i+=a.second;
            if(i>=k)
                return a.first;
        }
        return -1;
    }
};
