/*   https://leetcode.com/problems/reverse-string-ii/
     541. Reverse String II  */

class Solution {
public:
    string reverse(string s)
    {
        string str="";
        for(int i=0;i<s.size();i++)
            str=s[i]+str;
        return str;
            
    }
    string reverseStr(string s, int k) {
        string result="",sub;
        int it=1,i;
        long int size=s.size();
        int n,rem=0;
        n=size/k;
        rem=size%k;
        for(i=0;i<(n*k);i+=k)
        {
            sub=s.substr(i,k);
            if(it%2!=0)
                result=result+reverse(sub);
            else
                result=result+sub;
            it++;
        }
        if(rem!=0)
        {
            sub=s.substr(i,rem);
            if(it%2!=0)
                result=result+reverse(sub);
            else
                result=result+sub;
        }
        return result;
    }
};
