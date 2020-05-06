#include <iostream>
#include <math.h>
using namespace std;

long long int bino(int n,int r)
{
    long long int C[n+1][r+1],num;
    int min;
    num=pow(10,9)+7;
    for(int i=0;i<=n;i++)
    {
        min=(i<=r)?i:r;
        for(int j=0;j<=min;j++)
        {
            if(j==0||j==i)
                C[i][j]=1;
            else
                C[i][j]=(C[i-1][j-1]%num)+(C[i-1][j]%num);
        }
    }
    return C[n][r]%num;
}
int main() {
	int T,n,r;
	long long int c;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>n>>r;
	    if(n>=r)
	        c=bino(n,r);
	    else
	        c=0;
	    cout<<c<<endl;
	}
	return 0;
}
