#include<iostream>
#include<vector>
#include<map>
using namespace std;

int count_triplets(vector<long> arr, long r)
{
map<long,long> left,right;
   	long count=0,i,n,f,cl,cr;
   	n=arr.size();
   	for(i=0;i<n;i++)
       	right[arr[i]]++;
      for(i=0;i<n;i++)
      {
		cl=0,cr=0;
        if(arr[i]%r==0)
			cl=left[arr[i]/r];
		right[arr[i]]--;
		cr=right[arr[i]*r];
		count+=(cl*cr);
		left[arr[i]]++;
      }
   	return count;
}

int main()
{
	long r,n,i,x,res;
	cin>>n;
	cin>>r;
	vector<long> arr;
	for(i=0;i<n;i++)
	{
		cin>>x;
		arr.push_back(x);
	}
	res=count_triplets(arr,r);
    cout<<res;
	return 0;
}
