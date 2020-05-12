/* https://practice.geeksforgeeks.org/problems/power-of-numbers/0
      Power of Numbers  */

#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;

ll power(ll N, ll R)
{
	int rem;
	ll res;
	rem=R%2;
	R=(R-rem)/2;
	if(R!=0)
	{
		res=(N*N)%1000000007;
		res=power(res,R)%1000000007;
    }
	else
		res=1;
	if(rem==1)
		res=(res*N)%1000000007;
	return (res%1000000007);
}

int main() {
	ll T,N,result;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N;
	    ll R=0,n;
	    int r;
	    n=N;
	    while(n>0)
	    {
	        r=n%10;
	        n=n/10;
	        R=(R*10)+r;
	    }
        //cout<<R<<endl;
	    result=power(N,R)%1000000007;
	    cout<<result<<endl;
	}
	return 0;
}
