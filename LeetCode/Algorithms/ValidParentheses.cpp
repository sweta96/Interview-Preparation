/* https://leetcode.com/problems/valid-parentheses/
  20. Valid Parentheses */

class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        int top=-1;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
            {
                stack.push_back(s[i]);
                top++;
            }
            else
            {
                if(top==-1)
                    return false;
                auto it=stack.end();
                it--;
                if(s[i]==')')
                {
                    if(stack[top]=='(')
                    {
                        stack.erase(it);
                        top--;
                    }
                    else
                        return false;
                }
                else if(s[i]=='}')
                {
                    if(stack[top]=='{')
                    {
                        stack.erase(it);
                        top--;
                    }
                    else
                        return false;
                }
                else if(s[i]==']')
                {
                    if(stack[top]=='[')
                    {
                        stack.erase(it);
                        top--;
                    }
                    else
                        return false;
                }
                else
                    return false;
            }
        }
        if(top==-1)
            return true;
        else
            return false;
    }
};
