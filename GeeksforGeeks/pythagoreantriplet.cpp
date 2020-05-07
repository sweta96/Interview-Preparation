/* https://practice.geeksforgeeks.org/problems/pythagorean-triplet/0/
    Pythagorean Triplet   */
    
#include <bits/stdc++.h>
using namespace std;

int check(vector<long int> numbers,long int N)
{
    long int temp,temp1,sq,sub,q,r;
    for(long int p=N-1;p>=2;p--)
	{
	    sq=numbers[p];
	    q=0;
	    r=p-1;
	    while(q<r)
	    {
	        temp=numbers[q];
	        temp1=numbers[r];
	        if((temp+temp1)==sq)
	            return 1;
	        else if((temp+temp1)>sq)
	            r--;
	        else
	            q++;
	    }
	}
	return 0;
}

int main() {
	long int T,N,temp,sq,sub,flag;
	cin>>T;
	for(long int i=1;i<=T;i++)
	{
	    cin>>N;
	    vector<long int> numbers;
	    for(long int j=0;j<N;j++)
	    {
	        cin>>temp;
	        sq=(temp*temp);
	        numbers.push_back(sq);
	    }
	    sort(numbers.begin(),numbers.end());
	    flag=check(numbers,N);
	    if(flag==0)
	        cout<<"No"<<endl;
	    else
	        cout<<"Yes"<<endl;
	}
	return 0;
}
