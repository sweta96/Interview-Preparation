#include<iostream>
#include<vector>
#include<map>
using namespace std;
int findmedian(map<int,int> map1, int d)
{
    int f=0,n2,n1,median=0;
    n2=d/2+1;
    if(d%2==0)
    {
        n1=d/2;
        for(auto it=map1.begin();it!=map1.end();it++)
        {
            if(it->second>0)
            {  
                f+=it->second;
                if(f==n1)
                {
                    median+=it->first;
                    it++;
                    median+=it->first;
                    return median;
                }
                if(f>n1)
                {
                    median=2*(it->first);
                    return median;
                }
            }
        }
    }
    else
    {
        for(auto it=map1.begin();it!=map1.end();it++)
        {
            if(it->second>0)
            {
                f+=it->second;
                if(f>=n2)
                {
                    median=2*(it->first);
                    return median;
                }
            }
        }
    }
}
int fraud_notify(vector<int> expenditure,int d)
{
int notify=0,i,j,n;
    n=expenditure.size();
    map<int,int> map1;
    for(j=0;j<d;j++)
        map1[expenditure[j]]++;
    for(i=d;i<n;i++)
    {
        int median=0;
        median=findmedian(map1,d);
        if(expenditure[i]>=median)
            notify++;
        map1[expenditure[i-d]]--;
        map1[expenditure[i]]++;
    }
    return notify;
}
int main()
{        
    int n,i,x,d,result=0;
    cin>>n;
    cin>>d;
    vector<int> arr;
    for(i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }
    result=fraud_notify(arr,d);
    cout<<result;
}