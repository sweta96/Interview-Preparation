#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool f(int a,int b)
{
    if(a>b)
        return true;
    else 
        return false;
}
int luckbalance(int k, vector<vector<int>> contests)
{
	int n1,n,i,j,luck=0;
	n=contests.size();
	vector<int> temp(n);
	for(i=0;i<n;i++)
	{
		if(contests[i][1]==1)
			temp.push_back(contests[i][0]);
		else
			luck+=contests[i][0];
	}
    sort(temp.begin(),temp.end(),f);
    n1=temp.size();
    for(i=0;i<k;i++)
        luck+=temp[i];
    for(i=k;i<n1;i++)
        luck-=temp[i];
	return luck;
}
int main()
{
	int n,k,i,j,x,result;
	cin>>n;
	cin>>k;
    vector<vector<int>> arr(n);
	for(i=0;i<n;i++)
		for(j=0;j<2;j++)
		{
			cin>>x;
			arr[i].push_back(x);
		}
	result=luckbalance(k,arr);
	cout<<result;
	return 0;
}
