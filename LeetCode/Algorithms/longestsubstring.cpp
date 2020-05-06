#include<iostream>
#include<map>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map <char,int> str;
int n,m,i,j,count=0;
n=s.length();
for(i=0;i<n;i++)
{
	if(str[s[i]]==0)
		str[s[i]]=i+1;
	else
	{
		i=str[s[i]];
		m=str.size();
		if(m>count)
			count=m;
		str.clear();
		str[s[i]]=i+1;
	}
}	
        	m=str.size();
		if(m>count)
			count=m;
		return count; 
    }
};
int main()
{
    Solution res;
    string s;
    cin>>s;
    cout<<res.lengthOfLongestSubstring(s);
    return 0;
}
