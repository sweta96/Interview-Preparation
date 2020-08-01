/* https://leetcode.com/problems/consecutive-characters/
  1446. Consecutive Characters  */
  
class Solution {
public:
    int maxPower(string s) {
        long int count=1,size, max=0;
        char ch;
        size=s.size();
        if(size==0)
            return max;
        ch=s[0];
        for(int i=1;i<size;i++)
        {
            if(ch==s[i])
                count++;
            else
            {
                if(count>max)
                    max=count;
                ch=s[i];
                count=1;
            }
        }
        if(count>max)
            max=count;
        return max;
    }
};
