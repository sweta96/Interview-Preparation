#include<iostream>
#include<vector>
using namespace std;
void minimumBribes(vector<int> q)
{
	int i,len,j,bribes=0,temp,k;
	len=q.size();
	for(j=len-1;j>=2;j--)
	{
		if(q[j]==j+1||q[j-1]==j+1||q[j-2]==j+1)
		{
			if(q[j-1]==j+1)
			{
				bribes+=1;
				temp=q[j];
				for(k=j-1;k<j;k++)
					q[k]=q[k+1];
				q[k]=temp;
			}
			if(q[j-2]==j+1)
			{
				bribes+=2;
				temp=q[j];
				for(k=j-2;k<j;k++)
					q[k]=q[k+1];
				q[k]=temp;
			}
		}
		else
		{
			cout<<"Too chaotic";
			return;
		}
	}
	if(q[1]==2||q[0]==2)
	{
		if(q[0]==2)
			{
				bribes+=1;
				temp=q[1];
				for(k=0;k<1;k++)
					q[k]=q[k+1];
				q[k]=temp;
			}

	}
	cout<<bribes;
}
int main()
{
	vector<int> q;
	int n,x,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		q.push_back(x);
	}
	minimumBribes(q);
	return 0;
}


