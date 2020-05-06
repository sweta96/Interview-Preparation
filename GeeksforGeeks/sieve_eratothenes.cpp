#include<iostream>
#include<map>

using namespace std;
int main()
{
	int T,N[100]; 
//T is the number of Test Cases
//N is the array of numbers for each test case
int i,n,j,k;
cin>>T;
for(i=0;i<T;i++)
	cin>>N[i];
for(i=0;i<T;i++)
{
	n=N[i];
	map <int,int> numbers;
	for(j=2;j<=n;j++)
		numbers[j]=1;
	for(j=2;j<=(n/10)+10;j++)
	{
		if(numbers[j]!=0)
		{
			for(k=j+j;k<=n;k=k+j)
				numbers[k]=0;
		}
	}
	for(auto x=numbers.begin();x!=numbers.end();x++)
	{
		if(x->second!=0)
	        cout<<(x->first)<<" ";
	}
	cout<<endl;
}
	return 0;
}
