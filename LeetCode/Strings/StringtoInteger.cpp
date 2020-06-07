/* https://leetcode.com/problems/string-to-integer-atoi/submissions/
    8. String to Integer (atoi)  */

class Solution {
public:
    int myAtoi(string str) {
        int num=0;
        string sign="";
        int flag=0,flag1=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]>='0' && str[i]<='9')
            {
                flag=1;
                int n = (int)str[i] - 48;
                if(num < INT_MAX/10)
                    num=num*10+n;
                else if(num == INT_MAX/10 && n<=7)
                    num=num*10+n;
                else
                {
                    num=INT_MAX;
                    flag1=1;
                    break;
                }   
            }
            else if(str[i]=='-' && flag==0 && i<str.size()-1)
            {
                if(str[i+1]>='0' && str[i+1]<='9')
                    sign="-";
                else
                    return 0;
            }
            else if(str[i]=='+' && flag==0 && i<str.size()-1)
            {
                if(str[i+1]>='0' && str[i+1]<='9')
                {}
                else
                    return 0;
            }
            else if(str[i]==' ')
            {
                if(flag==1)
                    break;
            }
            else if(flag==0)
                return 0;
            else
                break;
        }
        if(sign=="-")
        {
            if(num==INT_MAX&&flag1==1)
                num=INT_MIN;
            else
                num=num*(-1);
        }
        return num;
    }
};
