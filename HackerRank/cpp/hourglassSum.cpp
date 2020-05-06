#include<iostream>
using namespace std;
int main()
{
	int arr[6][6],i,j,sum[16],max=0,k=0;
	for(i=0;i<6;i++)
		for(j=0;j<6;j++)
			cin>>arr[i][j];
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
	sum[k++]=arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i+1][j+1]+arr[i+2][j]+arr[i+2][j+1]+arr[i+2][j+2];
		}
	}
    max=sum[0]
	for(i=1;i<16;i++)
	{
		if(sum[i]>max)
			max=sum[i];
	}
	cout<<max;
	return 0;
}
