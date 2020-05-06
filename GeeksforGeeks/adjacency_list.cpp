#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int v,e;
	cin>>v;
	cin>>e;
    vector<vector<int>> list(v);
	int i,j;
	int u,v1;
	for(i=0;i<v;i++)
	{
		list[i].push_back(i);
	}
	for(i=0;i<e;i++)
	{
		cin>>u;
		cin>>v1;
		list[u].push_back(v1);
		list[v1].push_back(u);
	}
	int m;
	for(i=0;i<v;i++)
	{
		m=list[i].size();
		for(j=0;j<m-1;j++)
			cout<<list[i][j]<<"->";
		cout<<list[i][j]<<endl;
	}
	return 0;
}
