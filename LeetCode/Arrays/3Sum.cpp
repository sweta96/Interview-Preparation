/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/103/array-and-strings/776/
    3 Sum   */

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        map<vector<int>,int> dup;
        int n=nums.size();
        if(n<3)
            return result;
        int i,l,r,val;
        sort(nums.begin(),nums.end());
        for(i=0;i<n-2;i++)
        {
            l=i+1;
            r=n-1;
            val=(-1)*(nums[i]);
            while(l<r)
            {
                if(nums[l]+nums[r] == val)
                {
                    vector<int> temp;
                    temp.push_back(nums[i]);
                    temp.push_back(nums[l]);
                    temp.push_back(nums[r]);
                    if(!dup[temp])
                        dup[temp]=1;
                    l++;
                    r--;
                }
                else if(nums[l]+nums[r] > val)
                    r--;
                else
                    l++;
            }
        }
        for(auto a: dup)
        {
            if(a.second==1)
                result.push_back(a.first);
        }
        return result;
    }
};
