#include<iostream>
using namespace std;

int alternatingChar(string s)
{
	int i,n,count=0;
	n=s.length();
	for(i=0;i<n-1;i++)
	{
		if(s[i]==s[i+1])
			count++;
	}
	return count;
}
int main()
{
	string s;
	int res;
	cin>>s;
	res=alternatingChar(s);
	cout<<res;
}
