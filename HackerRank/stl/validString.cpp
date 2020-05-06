#include<iostream>
#include<map>

using namespace std;

string validString(string s)
{
	map<char,int> map1;
	map<int,int> map2;
	int n,i,m,c1,c2;
	n=s.length();
	for(i=0;i<n;i++)
		map1[s[i]]++;
	for(auto x=map1.begin();x!=map1.end();x++)
		map2[x->second]++;
	m=map2.size();
	if(m==1)
		return "YES";
	else if(m==2)
	{
		auto it=map2.begin();
		c1=it->first;
		if(c1==1)
		{
			if(it->second==1)
				return "YES";
			else
				return "NO";
		}
		else
		{
			it++;
			c2=it->first;
			if(c2-c1==1)
			{
				if(it->second==1)
					return "YES";
				else
					return "NO";
			}
            else
		        return "NO";
		}
    }
	else
		return "NO";
}
int main()
{
	string s,result;
	cin>>s;
	result=validString(s);
	cout<<result;
	return 0;
}
