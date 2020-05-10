/* https://leetcode.com/problems/complement-of-base-10-integer/submissions/
  Complement of Base 10 Integer  */

class Solution {
public:
    int bitwiseComplement(int N) {
        int n=0,m,r,k=0,bit[1024],l=0;
        m=N;
        if(m==0)
            return 1;
        if(m==1)
            return 0;
        while(m>0)
        {
            r=m%2;
            m=m/2;
            if(r==0)
                r=1;
            else
                r=0;
            bit[k++]=r;
        }
        for(int i=0;i<k;i++)
            n=n+(bit[i]*pow(2,l++));
        return n;
    }
};
