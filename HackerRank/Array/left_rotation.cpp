/* https://www.hackerrank.com/challenges/ctci-array-left-rotation/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=arrays
	Left Rotation */

#include<iostream>
#include<vector>
using namespace std;
vector<int> left(vector<int> a,int d)
{
    int i,temp,temp1,len;
    i=0;
    int n=a.size();
    if(n%2!=0||d!=n/2)
    {
        temp=a[d];
	for(len=0;len<n;len++)
	{
	    temp1=temp;
	    temp=a[i];
            a[i]=temp1;
            if(i<d)
		i=n-(d-i);
	    else
		i=i-d;
	}
    }
    else   
    {
        for(len=0;len<(n/2);len++)
        {
            temp=a[len];
            a[len]=a[len+d];
            a[len+d]=temp;
        }
    }
    return a;
}
int main()
{
	int i,n,d,x;
	cin>>n;
	cin>>d;
	vector<int> a;
	for(i=0;i<n;i++)
	{
		cin>>x;
		a.push_back(x);
	}
	a=left(a,d);
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	return 0;
}

