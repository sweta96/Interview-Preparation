/* https://leetcode.com/problems/trapping-rain-water/submissions/
    42. Trapping Rain Water  */

class Solution {
public:
    int max(int a,int b)
    {
        return (a>b)?a:b;
    }
    int trap(vector<int>& height) {
        if(height.size()<=2)
            return 0;
        int result=0;
        int l=0;
        int r= height.size()-1;
        int level=0,lower=0;
        while(l<r)
        {
            if(height[l]<height[r])
                lower=height[l++];
            else
                lower=height[r--];
            level=max(level,lower);
            result+=(level-lower);
        }
        return result;
    }
};
