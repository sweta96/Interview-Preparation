/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/92/array/674/
  Intersection of Two Arrays  */

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        auto it1 = nums1.begin();
        auto it2 = nums2.begin();
        vector<int> nums3;
        while(it1!=nums1.end() &&  it2!=nums2.end())
        {
            if(*it1==*it2)
            {
                nums3.push_back(*it1);
                it1++;
                it2++;
            }
            else if(*it1<*it2)
                it1++;
            else
                it2++;
            
        }
        return nums3;
    }
};
