/*  https://leetcode.com/problems/zigzag-conversion/submissions/
    6. ZigZag Conversion  */
    
class Solution {
public:
    string convert(string s, int numRows) {
        int flag=0,n,k=0,l;
        n=s.size();
        string result[numRows];
        string s1;
        for(int i=0;i<numRows;i++)
            result[i]="";
        for(int i=0;i<n;i++)
        {
            if(k<numRows-1 && flag==0)
                result[k++]+=s[i];
            else if(k==numRows-1 && flag==0)
            {
                result[k]+=s[i];
                k=numRows-1;
                if(k>1)
                    flag=1;
                else
                    k=0;
            }
            else if(flag==1)
            {
                k--;
                result[k]+=s[i];
                if(k==1)
                {
                    flag=0;
                    k=0;
                }
            }
        }
        for(int i=0;i<numRows;i++)
            s1+=result[i];
        return s1;
    }
};
