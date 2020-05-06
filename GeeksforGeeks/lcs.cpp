#include<iostream>
using namespace std;

int max(int a,int b)
{
	return (a>=b)?a:b;
}

int lcs(string a,string b, int n, int m)
{
	int count[n+1][m+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			if(i==0 || j==0)
				count[i][j]=0;
			if(a[i-1]==b[j-1])
				count[i][j]=1+count[i-1][j-1];
			else
				count[i][j]=max(count[i-1][j],count[i][j-1]);
		}
	}
	return count[n][m];
}

int main()
{
	int T,m,n,result;
	string str1, str2;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
		cin>>n>>m;
		cin>>str1>>str2;
		result = lcs(str1,str2,n,m);
		cout<<result<<endl;
	}
	return 0;
}
