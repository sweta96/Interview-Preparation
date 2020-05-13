/*https://practice.geeksforgeeks.org/problems/prime-number/0
    Prime Number   */

#include<iostream>
#define ll unsigned long long int
using namespace std;

ll findbase(ll num)
{
    ll i,number,sum,sum1,n;
    i=2;
    number=num;
    sum=i+1;
    sum1=1;
    n=i;
    while(i<=num/4)
    {
		if(number%i!=1)
		{
			number=num;
			i++;
			sum=i+1;
			sum1=1;
			n=i;
		}
		else
		{
			number=number/i;
			if(number==sum||number==sum1)
				return i;
			else
			{
			    sum1=sum;
			    n=n*i;
			    sum=sum+n;
			}
		}
	}
    return (num-1);
}
int main()
{
    ll T,N;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N;
        ll result;
        result=findbase(N);
        cout<<"Case #"<<i<<": "<<result<<endl;
    }
    return 0;
}
