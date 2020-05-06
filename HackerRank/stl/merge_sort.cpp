#include<iostream>
#include<vector>
using namespace std;
vector <int> a;
int merge_sort(int s,int m,int e)
{
    int i,j,k,n1,n2;
    n1=m-s+1;
    n2=e-m;
    k=s;
    vector <int> x;
    vector <int> y;
    for(i=s;i<=m;i++)
        x.push_back(a[i]);
    x.push_back(9999);
    for(i=m+1;i<=e;i++)
        y.push_back(a[i]);
    y.push_back(9999);
    i=j=0;
    while(i<n1||j<n2)
    {   
        if(x[i]<y[j])
        {
            a[k]=x[i];
            i++;
        }
        else
        {
            a[k]=y[j];
            j++;
        }
        k++;
    }
    return 0;
}
int divide(int s,int e)
{
    if(s!=e)
    {
        int m=(s+e)/2;
        divide(s,m);
        divide(m+1,e);
        merge_sort(s,m,e);
    }
    return 0;
}
int main()
{
    int n,z;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>z;
        a.push_back(z);
    }
    divide(0,n-1);
    for(auto b=a.begin();b!=a.end();b++)
        cout<<*b<<" ";
    cout<<endl;
    return 0;
}
