/*https://practice.geeksforgeeks.org/problems/unsorted-array/0/
    Element with left side smaller and right side greater */

#include <iostream>
#define ll long long int
using namespace std;

int main() {
	ll T,N;
	cin>>T;
	for(ll i=1;i<=T;i++)
	{
	    cin>>N;
	    ll numbers[N],num=-1,flag=1;
	    for(ll j=0;j<N;j++)
	        cin>>numbers[j];
	    for(ll j=1;j<N-1;j++)
	    {
	        if((numbers[j-1]<=numbers[j])&&(numbers[j+1]>=numbers[j]))
	        {
	            flag=1;
	            for(ll k=0;k<j;k++)
	            {
	                if(numbers[j]<numbers[k])
	                {
	                    flag=0;
	                    break;
	                }
	            }
	            if(flag==1)
	            {
	                for(ll k=j+1;k<N;k++)
	                {
	                    if(numbers[j]>numbers[k])
	                    {
	                        flag=0;
	                        break;
	                    }
	                }
	            }
	            if(flag==1)
	            {
	                num=numbers[j];
	                break;
	            }
	        }
	    }
	    cout<<num<<endl;
	}
	return 0;
}
