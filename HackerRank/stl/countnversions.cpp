#include<iostream>
#include<vector>
using namespace std;
long countInversions(vector<int> &arr) {
    long n,mid;
    n=arr.size();    
    if(n<=1)
        return 0;
    mid=n/2;
    vector<int> x(arr.begin(),arr.begin()+mid);
    vector<int> y(arr.begin()+mid,arr.end());
    long swaps=countInversions(x)+countInversions(y);
    long i,j,k;
    long range=n-mid;
    i=j=k=0;
    while(k<n)
    {   
        if((i<mid)&&(x[i]<=y[j]||j>=range))
        {
            arr[k]=x[i];
            i++;
        }
        else
        {
            arr[k]=y[j];
            swaps+=(mid-i);
            j++;
        }
        k++;
    }
    return swaps;
}
int main()
{
    vector<int> arr;
    int x,n,i,result;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    result=countInversions(arr);
    cout<<result;
}