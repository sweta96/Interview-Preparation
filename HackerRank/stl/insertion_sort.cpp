#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector <int> a;
	int n,x,z,i,j,index;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>z;
		a.push_back(z);
	}
	for(i=1;i<n;i++)
	{
		index=i;
		for(j=i-1;j>=0;j--)
		{
			if(a[i]<a[j])
				index=j;
			else
				break;
		}
		if(index!=i)
		{
			x=a[i];
			for(j=i-1;j>=index;j--)
				a[j+1]=a[j];
			a[index]=x;
		}
	}		
	for(auto y=a.begin();y!=a.end();y++)
		cout<<*y<<" ";
	cout<<endl;
	return 0;
}
