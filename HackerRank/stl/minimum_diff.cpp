#include<iostream>
#include<vector>
#include<map>
using namespace std;
int minimum_diff(vector<int> arr)
{
	int diff,n,i,temp_diff;
    n=arr.size();
	map<int,int> num;
	for(i=0;i<n;i++)
		num[arr[i]]++;
	auto it=num.begin();
    	auto it1=num.begin();
    	it1++;
    	diff=(it1->first)-(it->first);
	for(auto it=num.begin();it!=num.end();it++)
	{
		if(it->second>1)
			return 0;
		else
		{
			it1=it;
			it1++;
            if(it1!=num.end())
            {
			    temp_diff=(it1->first)-(it->first);
			    if(temp_diff<diff)
				    diff=temp_diff;
            }
		}
	}
	return diff;
}
int main()
{
	vector<int> arr;
	int n,i,x,result;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	result=minimum_diff(arr);
	cout<<result;
	return 0;
}
