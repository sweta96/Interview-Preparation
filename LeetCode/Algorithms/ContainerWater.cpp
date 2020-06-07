/*  https://leetcode.com/problems/container-with-most-water/submissions/
    11. Container With Most Water  */

class Solution {
public:
    int min(int a, int b)
    {
        return (a<b)?a:b;
    }
    int maxArea(vector<int>& height) {
        int max=0,area=0;
        int i=0;
        int j=height.size()-1;
        while(i<j)
        {
            area=(j-i)*min(height[i],height[j]);
            if(area>max)
                max=area;
            if(height[i]<height[j])
                i++;
            else
                j--;
        }
        return max;
    }
};
