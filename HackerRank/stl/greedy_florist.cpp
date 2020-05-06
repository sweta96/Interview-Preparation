#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
using namespace std;

bool f(int a,int b)
{
    if(a>b)
        return true;
    else 
        return false;
}
int greedyflorist(int k, vector<int> c)
{
	int i,n,rem,range,min_price=0;
	map<int,int> count;
	for(i=0;i<k;i++)
		count[i]=0;
	sort(c.begin(),c.end(),f);
	auto it=count.begin();
	n=c.size();
	while(n!=0)
	{
		if(n>=k)
			range=k;
		else
			range=n;
for(i=0;i<range;i++)
		{
			min_price+=(count[i]+1)*c[i];
			count[i]++;
		}
		c.erase(c.begin(),c.begin()+range);
		n=c.size();
}
return min_price;	
}
int main()
{
	int n,k,x,i,result;
	vector<int> c;
	cin>>n;
	cin>>k;
	for(i=0;i<n;i++)
	{
		cin>>x;
		c.push_back(x);
	}
	result=greedyflorist(k,c);
	cout<<result;
	return 0;
}
