#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> freqQuery(vector<vector<int>> queries)
{
	vector<int> output;
	map<int,int> freq,fcount;
	long n,i,f=0,fr;
	n=queries.size();
	for(i=0;i<n;i++)
	{
		if(queries[i][0]==1)
		{
			fr=freq[queries[i][1]];
               	fcount[fr]--;
			freq[queries[i][1]]++;
			fcount[fr+1]++;
		}
		else if(queries[i][0]==2)
		{
			if(freq[queries[i][1]]!=0)
			{
				fr=freq[queries[i][1]];
				fcount[fr]--;
				freq[queries[i][1]]--;
				fcount[fr-1]++;
			}
		}
		else
		{
			if(fcount[queries[i][1]]>0)
				output.push_back(1);
			else
				output.push_back(0);
		}
	}
	return output;
}

int main()
{
	vector<vector<int>> arr;
	vector<int> result;
    int x,i,j,n;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			cin>>x;
			arr[i].push_back(x);
		}
	}
	result=freqQuery(arr);
	for(auto it=result.begin();it!=result.end();it++)
		cout<<*it<<endl;
	return 0;
}

