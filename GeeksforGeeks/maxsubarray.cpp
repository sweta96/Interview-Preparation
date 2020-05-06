/* Question: https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k/0/
    Maximum of all subarrays of size k */

#include <iostream>
#include <vector>
using namespace std;

vector<int> findmax(vector<int> sub)
{
    int max=sub[0];
    int len=sub.size();
    int index;
    vector<int> result;
    for(int i=0;i<len;i++)
    {
        if(sub[i] >=max)
        {
            max=sub[i];
            index=i;
        }
    }
    result.push_back(max);
    result.push_back(index);
    return result;
}

int main() {
	int T,N,k,max,temp,index;
	vector<int> numbers;
	vector<int> subarray;
	vector<int> greater;
	vector<int> res;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N>>k;
	    for(int j=0;j<N;j++)
	    {
	        cin>>temp;
	        numbers.push_back(temp);
	    }
	    max=numbers[0];
	    index=0;
	    for(int j=0;j<k;j++)
	    {
	        subarray.push_back(numbers[j]);
	        if(numbers[j]>=max)
	        {
	            max=numbers[j];
	            index=j;
	        }
	    }
	    greater.push_back(max);
	    for(int j=k;j<N;j++)
	    {
	        auto it=subarray.begin();
	        subarray.erase(it);
	        subarray.push_back(numbers[j]);
	        if(index==(j-k))
	        {
	            res=findmax(subarray);
	            max=res[0];
	            index=res[1]+(j-k)+1;
	        }
	        else
	        {
	            if(numbers[j]>=max)
	            {
	                max=numbers[j];
	                index=j;
	            }
	        }
	        greater.push_back(max);
	    }
	    for(auto it=greater.begin();it!=greater.end();it++)
	    {
	        cout<<*it<<" ";
	    }
	    cout<<endl;
	    numbers.clear();
	    subarray.clear();
	    greater.clear();
	}
	return 0;
}
