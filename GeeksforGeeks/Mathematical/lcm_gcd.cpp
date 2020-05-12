/*https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0
    LCM and GCD  */

#include <iostream>
using namespace std;

int main() {
	//code
	long long int T,N1,N2,gcd,rem,lcm=0,div,d;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N1>>N2;
	    d=N1;
	    div=N2;
	    rem=d%div;
	    while(rem!=0)
	    {
	        d=div;
	        div=rem;
	        rem=d%div;
	    }
	    gcd=div;
	    lcm = (N1*N2)/gcd;
	    cout<<lcm<<" "<<gcd<<endl;
	}
	return 0;
}
