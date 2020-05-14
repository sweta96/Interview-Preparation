#include<bits/stdc++.h>
using namespace std;
int arrayManipulation(int n,vector<vector<int>> queries)
{
	vector<long> arr(n,0);
	int i,x,y;
long sum=0,max=0;
	for(i=0;i<queries.size();i++)
{
x=queries[i][0]-1;
y=queries[i][1];
arr[x]+=queries[i][2];
arr[y]-=queries[i][2];
	}
	for(i=0;i<n;i++)
	{
		sum+=arr[i];
		if(sum>max)
			max=sum;
	}
	return max;
}
int main()
{
	int n,m,i,j,x,max;
	cin>>n;
	cin>>m;
	vector<vector<int>> queries(m);
	for(i=0;i<m;i++)
	{
		queries[i].resize(3);
		for(j=0;j<3;j++)
		{
			cin>>x;
			queries[i][j]=x;
		}
	}
	max=arrayManipulation(n,queries);
	cout<<max;
	return 0;
}

