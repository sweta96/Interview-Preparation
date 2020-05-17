/* https://practice.geeksforgeeks.org/problems/largest-number-possible/0/
  Largest Number Possible */

#include <iostream>
using namespace std;

int main() {
	int T,N,S;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N>>S;
	    int remains,number[N]={0};
	    remains=S;number;
	    for(int j=0;j<N;j++)
	    {
	        if(remains>=9)
	        {
	            number[j]=9;
	            remains=remains-9;
	        }
	        else
	        {
	            number[j]=remains;
	            remains=0;
	            break;
	        }
	    }
	    if(remains!=0 || S==0)
	        cout<<"-1";
	    else
	    {
    	    for(int j=0;j<N;j++)
	            cout<<number[j];
	    }
	    cout<<endl;
	}
	return 0;
}
