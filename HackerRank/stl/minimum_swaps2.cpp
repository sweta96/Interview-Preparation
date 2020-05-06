#include<iostream>
#include<vector>
using namespace std;
int minimumSwaps(vector<int> arr)
{
	int i,j,n,temp,swaps=0,index;
	n=arr.size();
	for(i=0;i<n-1;i++)
	{
		if(arr[i]!=i+1)
		{
			index=arr[i]-1;
			if(arr[index]<arr[i])
			{
				temp=arr[index];
				arr[index]=arr[i];
				arr[i]=temp;
				i--;
				swaps++;
			}
			else
			{
				for(j=i;j<n;j++)
				{
					if(arr[j]==i+1)
					{
						temp=arr[j];
						arr[j]=arr[i];
						arr[i]=temp;
						swaps++;
						break;
					}
				}
			}
		}
	}
	return swaps;
}
int main()
{
	int n,x,i,swaps;
	cin>>n;
	vector<int> arr(n);
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	swaps=minimumSwaps(arr);
	cout<<swaps;
	return 0;
}
