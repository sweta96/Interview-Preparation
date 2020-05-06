/* Question: https://codingcompetitions.withgoogle.com/kickstart/round/0000000000201ca2/0000000000201d30 */


#include<bits/stdc++.h>
using namespace std;

int count(string name)
{
	map<char,int> letters;
    for(int i =0;i<name.size();i++)
    {
	    if(name[i]!=' ')
			letters[name[i]]++;
	}
	return letters.size();
}

string leader(vector<string> leaders)
{
	string name=leaders[0];
	for(int i =1;i<leaders.size();i++)
	{
		if(leaders[i]<name)
			name=leaders[i];
	}
	return name;
}

int main()
{
	int T,N;
	vector<string> names;
	vector<string> leaders;
	string name;
	int max;
	cin>>T;
	for(int i =1; i<=T;i++)
	{
		cin>>N;
		for(int j=0;j<=N;j++)
		{
			getline(cin,name);
			names.push_back(name);
		}
		map<string,int> freq;
		for(int j=0;j<=N;j++)
		{
			name=names[j];
			freq[name]=count(name);
            if((freq.size()==1) || (max<freq[name]))
			{
				max=freq[name];
				leaders.clear();
				leaders.push_back(name);
			}
			else if(max==freq[name])
				leaders.push_back(name);
		}
		if(leaders.size()==1)
			name=leaders[0];
		else
			name=leader(leaders);
		cout<<"Case #"<<i<<": "<<name<<endl;
		names.clear();
	}
	return 0;
} 
