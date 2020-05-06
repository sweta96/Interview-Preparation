#include<iostream>
#include<vector>
using namespace std;

long minTime(vector<long> machines,long goal)
{
	long k=1,goal_temp=0;
	long i,n,max=0;
	n=machines.size();
	for(i=0;i<n;i++)
	{
		if(machines[i]>max)
			max=machines[i];
	}
	long mid,low,high;
	low=1;
	high=max*goal;
	while(low<high)
	{
		goal_temp=0;
		mid=(low+high)/2;
		for(i=0;i<n;i++)
			goal_temp+=(mid/machines[i]);
		if(goal_temp<goal)
			low=mid+1;
		else
			high=mid;
	}
	return high;
}
int main()
{
	long x,i,m,goal,result;
	vector<long> mac;
	cin>>m;
	cin>>goal;
	for(i=0;i<m;i++)
	{
		cin>>x;
		mac.push_back(x);
	}
	result=minTime(mac,goal);
	cout<<result;
	return 0;
}
