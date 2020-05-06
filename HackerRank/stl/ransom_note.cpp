#include<iostream>
#include<vector>
#include<map>
#include<string.h>

using namespace std;

void checkMagazine(vector<string> magazine,vector<string> note)
{
	int i,n=0,m=0,s=0;
	n=note.size();
	m=magazine.size();
	map<string,int> fn,fm;
	for(i=0;i<n;i++)
		fn[note[i]]++;
	for(i=0;i<m;i++)
		fm[magazine[i]]++;
	for(i=0;i<n;i++)
	{
		if(fm[note[i]]>=fn[note[i]])
			s++;
		else
		{
			cout<<"No";
			return;
		}
	}
	if(s==n)
		cout<<"Yes";
	else
		cout<<"No";
}
int main()
{
	int i,j,n,m;
	vector<string> magazine,note;
	string x;
	cin>>n;
	cin>>m;
	for(i=0;i<n;i++)
	{
		cin>>x;
		magazine.push_back(x);
	}
	for(i=0;i<m;i++)
	{
		cin>>x;
		note.push_back(x);
	}
	checkMagazine(magazine,note);
	return 0;
}

