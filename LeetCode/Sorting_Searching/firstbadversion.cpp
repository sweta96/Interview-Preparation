/* https://leetcode.com/explore/featured/card/top-interview-questions-easy/96/sorting-and-searching/774/
    First Bad Version   */
    
class Solution {
public:
    int firstBadVersion(int n) {
        long long int lb,ub,mid;
        lb=1;
        ub=n;
        mid=((lb+ub)/2);
        while(ub>=lb)
        {
            if(isBadVersion(mid)==true)
            {
                if((mid-1!=0)&&(isBadVersion(mid-1)==false))
                    return mid;
                ub=mid-1;
            }
            else
                lb=mid+1;
            if(lb<=ub)
                mid=((lb+ub)/2);
        }
        return mid;
    }
};
