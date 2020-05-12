/*https://practice.geeksforgeeks.org/problems/stock-buy-and-sell/0/
    Stock Buy and Sell  */

#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll T,N;
	cin>>T;
	for(ll i =1;i<=T;i++)
	{
	    cin>>N;
	    ll price[N],count=0,stock[N][2],k=0,buy,sell;
	    for(ll j=0;j<N;j++)
	    {
	        cin>>price[j];
	        if(j==0)
	            buy=0;
	        else
	        {
	            if(price[j]>=price[j-1])
	                count++;
	            else
	            {
	                if(count!=0)
	                {
	                    sell=j-1;
	                    stock[k][0]=buy;
	                    stock[k++][1]=sell;
	                    count=0;
	                    buy=j;
	                }
	                else
	                    buy=j;
	            }
	        }
	    }
	    if(count!=0)
	    {
	        sell=N-1;
	        stock[k][0]=buy;
	        stock[k++][1]=sell;
	        count=0;
	    }
	    for(ll j=0;j<k;j++)
	        cout<<"("<<stock[j][0]<<" "<<stock[j][1]<<") ";
	    if(k==0)
	        cout<<"No Profit";
	    cout<<endl;
	}
	return 0;
}
