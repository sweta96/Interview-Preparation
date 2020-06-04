/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/111/dynamic-programming/807/
    Jump Game   */

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n,i,j;
        n=nums.size();
        if(n==1)
            return true;
        if(nums[0]==0)
            return false;
        vector<int> array(n);
        for(i=0;i<n;i++)
            array[i]=0;
        j=0;
        array[j]=1;
        while(j<n-1)
        {
            if(array[j]!=0)
            {
                i=nums[j]+j;
                if(i>=n)
                    i=n-1;
	            while(i>j)
                {
                    array[i]=1;
                    i--;
                }
                if(array[n-1]==1)
                    return true;
            }
            j++;
        }
        if(array[n-1]!=0)
	        return true;
        else
	        return false;
    }
};
