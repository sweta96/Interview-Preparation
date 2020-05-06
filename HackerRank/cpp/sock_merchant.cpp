#include<iostream>
using namespace std;
int main()
{
	int i,j,temp,n,ar[100],count=0;
    cin>>n;
	for(i=0;i<n;i++)
		cin>>ar[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]==ar[i+1])
		{
	count++;
	i++;
}
		
	}
	cout<<count;
	return 0;
}
