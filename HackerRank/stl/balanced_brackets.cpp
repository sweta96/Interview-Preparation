#include<iostream>
#include<stack>
using namespace std;
string isBalanced(string s) {
    int len=s.length();
    stack<char> s1;
    int i;
    for(i=0;i<len;i++)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
            s1.push(s[i]);
        else if(s1.size()>0 && (s[i]==')' && s1.top()=='('))
            s1.pop();
        else if(s1.size()>0 && (s[i]=='}' && s1.top()=='{'))
            s1.pop();
        else if(s1.size()>0 && (s[i]==']' && s1.top()=='['))
            s1.pop();
        else
            return "NO";
    }
    if(s1.size()==0)
        return "YES";
    else
        return "NO";
}
int main()
{
    string s,result;
    cin>>s;
    result=isBalanced(s);
    cout<<result;
    return 0;
}
