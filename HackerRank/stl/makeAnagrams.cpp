#include<iostream>
#include<map>
using namespace std;
int makeAnagrams(string a, string b)
{
	int n,m,i,j,count=0;
	n=a.length();
	m=b.length();
	map<char,int> map1;
	map<char,int> map2;
	for(i=0;i<n;i++)
{
		map1[a[i]]++;
	}
	for(j=0;j<m;j++)
	{
		map2[b[j]]++;
	}
	auto ita=map1.begin();
	auto itb=map2.begin();
	while(ita!=map1.end()&&itb!=map2.end())
	{
		if(ita->first==itb->first)
		{
			if(ita->second!=itb->second)
			{
				if(ita->second>itb->second)
                   		count+=ita->second-itb->second;
               		else
                   		count+=itb->second-ita->second;
			}
			ita++;
			itb++;
		}
		else
		{
			if(ita->first>itb->first)
			{
				count+=itb->second;
				itb++;
			}
			else
			{
				count+=ita->second;
				ita++;
			}
		}
	}
	if(ita!=map1.end())
	{
		while(ita!=map1.end())
		{
			count+=ita->second;
			ita++;
}
	}
	if(itb!=map2.end())
	{
		while(itb!=map2.end())
		{
			count+=itb->second;
			itb++;
}
	}
	return count;
}
int main()
{
	string a,b;
	int result;
	cin>>a;
	cin>>b;
	result=makeAnagrams(a,b);
	cout<<result;
}
