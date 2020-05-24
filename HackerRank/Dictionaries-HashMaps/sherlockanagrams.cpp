#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int sherlock_anagrams(string s)
{
	int i,j,n,f,result=0;
	n=s.length();
	map<vector<int>,int> map1;
	for(i=0;i<n;i++)
	{
		vector <int> freq(26,0);
		for(j=i;j<n;j++)
		{
			freq[(int)(s[j]-'a')]++;
			map1[freq]++;
		}
	}
	for(auto x=map1.begin();x!=map1.end();x++)
	{
		f=x->second;
		result+=(f*(f-1))/2;
	}
	return result;
}
int main()
{
	string s;
	int r;
	cin>>s;
	r=sherlock_anagrams(s);
	return 0;
}
