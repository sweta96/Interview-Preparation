/* https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem/0
      Chocolate Distribution Problem */

#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll T,N,M,temp,min,left,right;
	cin>>T;
	for(ll i=1;i<=T;i++)
	{
	    cin>>N;
	    ll numbers[N];
	    for(ll j=0;j<N;j++)
	    {
	        cin>>numbers[j];
	    }
	    cin>>M;
	    sort(numbers,numbers+N);
	    left=0;
	    right=M-1;
	    min=numbers[N-1];
	    while(right<N)
	    {
	        temp=numbers[right]-numbers[left];
	        if(temp<min)
	            min=temp;
	        left++;
	        right++;
	    }
	    cout<<min<<endl;
	}
	return 0;
}
