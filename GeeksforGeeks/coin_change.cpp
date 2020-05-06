/* Coin Change
   Link to Question : https://practice.geeksforgeeks.org/problems/coin-change/0/ */
   
#include <iostream>
#include <vector>
using namespace std;

int coin_change(int M, vector<int> cents, int N)
{
    int C[M+1][N+1];
    for(int i=0;i<=M;i++)
    {
        for(int j=0;j<=N;j++)
        {
            if(i==0)
                C[i][j]=0;
            else if(j==0)
                C[i][j]=1;
            else if(j<cents[i-1])
                C[i][j]=C[i-1][j];
            else
                C[i][j]=C[i-1][j]+C[i][j-cents[i-1]];
        }
    }
    return C[M][N];
}

int main() {
	//code
	int T,M,N,num,result;
	vector<int> cents;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>M;
	    for(int j=0;j<M;j++)
	    {
	        cin>>num;
	        cents.push_back(num);
	    }
	    cin>>N;
	    result = coin_change(M,cents,N);
	    cout<<result<<endl;
	    cents.clear();
	}
	return 0;
}
