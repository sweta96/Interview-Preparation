#include<iostream>
#include<map>
using namespace std;
int main()
{
	int T,N[100]; 
//T is the number of Test Cases
//N is the array of numbers for each test case
int i,n,j,k,count=0,max=0;
cin>>T;
for(i=0;i<T;i++)
	cin>>N[i];
for(i=0;i<T;i++)
{
	map <int,int> numbers;
	for(j=0;j<N[i];j++)
	{
		cin>>n;
		numbers[n]++;
	}
	count=1;
	max=1;
	int x,y;
	auto it1=numbers.begin();
	x=it1->first;
	it1++;
	for(auto it=it1;it!=numbers.end();it++)
	{
		y=it->first;
		if(y==(x+1))
			count++;
		else
		{
			max=(count>max)?count:max;
			count=1;
		}
		x=y;
	}
    max=(count>max)?count:max;
	cout<<max<<endl;
}
	return 0;
}

