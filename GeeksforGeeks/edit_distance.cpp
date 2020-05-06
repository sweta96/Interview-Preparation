/* EDIT DISTANCE
   Link to Question: https://practice.geeksforgeeks.org/problems/edit-distance/0/ */
   
#include <iostream>
using namespace std;

int min(int a,int b)
{
    return (a<=b)?a:b;
}

int edit_distance(string str1,string str2,int m,int n)
{
    int cost[m+1][n+1];
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0)
                cost[i][j]=j;
            else if(j==0)
                cost[i][j]=i;
            else if(str1[i-1]==str2[j-1])
                cost[i][j]=cost[i-1][j-1];
            else
                cost[i][j]=1 + min(min(cost[i][j-1],cost[i-1][j]),cost[i-1][j-1]);
        }
    }
    return cost[m][n];
}

int main() 
{
	int T,m,n,result;
	string str1, str2;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>m>>n;
	    cin>>str1>>str2;
	    result = edit_distance(str1,str2,m,n);
	    cout<<result<<endl;
	}	
	return 0;
}
