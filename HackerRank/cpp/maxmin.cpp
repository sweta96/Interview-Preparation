#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxmin(int k, vector<int> arr)
{
	int i,n,min,min_temp=0;
	n=arr.size();
	sort(arr.begin(),arr.end());
	min=arr[k-1]-arr[0];
	for(i=0;i<n-k+1;i++)
	{
		vector<int> temp(arr.begin()+i,arr.begin()+i+k);
		min_temp=temp[k-1]-temp[0];
		if(min_temp<min)
			min=min_temp;
	}
	return min;
}
int main()
{
	int i,n,k,x,result;
	vector<int> arr;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	result=maxmin(k,arr);
	cout<<result;
	return 0;
}
