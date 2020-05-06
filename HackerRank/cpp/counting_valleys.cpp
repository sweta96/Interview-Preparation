#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
	int n,i,count=0,ud=0;
	string s;
	cin>>n;
	cin>>s;
	for(i=0;i<n;i++)
	{
		if(s[i]=='D')
			ud+=-1;
		if(s[i]=='U')
		{
			ud+=1;
			if(ud==0)
				count++;
		}
	}
	cout<<count;
	return 0;
}
