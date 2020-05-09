/* https://codingcompetitions.withgoogle.com/kickstart/round/0000000000201ca0/0000000000201d2f
    Diwali Lightings   */
    
#include<iostream>
#include<string>
#include<map>
#define ll long long int
using namespace std;

ll countblue(ll count,ll I,ll N,map<int,int> index)
{
    ll n,num=0;
    int r;
    r=I%N;
    r--;
    n=I/N;
    num=(n*count)+index[r];
    return num;
}

int main()
{
    ll T,I,J,count=0;
    int N;
    string pattern,end;
    cin>>T;
    for(ll i=1;i<=T;i++)
    {
        cin>>pattern;
        cin>>I>>J;
        N=pattern.size();
        ll numI,numJ,num;
        int id;
        map<int,int> index;
        count=0;
        for(ll j=0;j<N;j++)
        {
            if(pattern[j]=='B')
                count++;
            index[j]=count;
        }
        numI=countblue(count,I,N,index);
        numJ=countblue(count,J,N,index);
        num=numJ-numI;
        id=I%N;
        if(id==0)
            id=N-1;
        else
            id--;
        if(pattern[id]=='B')
            num++;
        cout<<"Case #"<<i<<": "<<num<<endl;
    }
    return 0;
}
