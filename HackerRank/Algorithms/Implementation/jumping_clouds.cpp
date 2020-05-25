/* https://www.hackerrank.com/challenges/jumping-on-the-clouds/problem
	Jumping on the Clouds  */

#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n,x,count=0;
	cin>>n;
	vector <int> c(n);
	for(int i=0;i<n;i++)
	{
		cin>>x;
		c[i]=x;
	}
	for(auto i=c.begin();i<c.end()-1;i++)
	{
		if(*(i+2)==0)
		{
			count++;
			i++;
		}
		else
		{
			count++;
		}
	}
	cout<<count;
}
