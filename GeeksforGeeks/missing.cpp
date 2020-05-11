/* https://practice.geeksforgeeks.org/problems/find-missing-and-repeating/0
    Find Missing and Repeating */

#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll T,N;
	cin>>T;
	for(ll i=1;i<=T;i++)
	{
	    cin>>N;
	    ll sum,sum1=0,a,b=N+1,num;
	    sum=(N*(N+1))/2;
	    ll arr[N]={0};
	    for(ll j=0;j<N;j++)
	    {
	        cin>>num;
	        sum1=sum1+num;
	        if(arr[num-1]==1) // if repeating
	        {
	            if(num<b) // take the smallest of the repeating elements
	                b=num;
	        }
	        else
	            arr[num-1]=1; // if not repeating
	    }
	    sum1=sum1-b;
	    a=sum-sum1;
	    cout<<b<<" "<<a<<endl; 
	}
	return 0;
}
