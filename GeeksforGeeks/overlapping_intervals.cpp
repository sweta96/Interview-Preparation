#include<iostream>
using namespace std;

int main()
{
	int T, N[50],A[50][100],i,j,k,temp,temp1;
	cin>>T;
	for(i=0;i<T;i++)
	{
		cin>>N[i];
		for(j=0;j<N[i]*2;j++)
			cin>>A[i][j];
	}
	for(i=0;i<T;i++)
	{
		for(j=0;j<N[i]*2;j+=2)
		{
			for(k=0;k<(N[i]*2)-2-j;k+=2)
			{
				if(A[i][k]>A[i][k+2])
				{
					temp=A[i][k];
					temp1=A[i][k+1];
					A[i][k]=A[i][k+2];
					A[i][k+1]=A[i][k+3];
					A[i][k+2]=temp;
					A[i][k+3]=temp1;
				}
			}
		}
		j=1,k=2;
		while(k<(N[i]*2))
		{
			if(A[i][j]>=A[i][k])
				k++;
			else
			{
				if(k%2==0)
				{
					cout<<A[i][j-1]<<" "<<A[i][j]<<" ";
					j=k+1;
					k=k+2;
				}
				else
				{
					A[i][j]=A[i][k];
					k++;
				}
			}
		}
		cout<<A[i][j-1]<<" "<<A[i][j]<<endl;
	}
	return 0;
}
