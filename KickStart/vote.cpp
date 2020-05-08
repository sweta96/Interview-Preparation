/* https://codingcompetitions.withgoogle.com/kickstart/round/0000000000201db8/0000000000201c06
    Vote   */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    double N,M,prob;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N>>M;
        if(M==0)
            prob=1.0;
        else
            prob=(N-M)/(N+M);
        cout<<"Case #"<<i<<": "<<fixed<<setprecision(8)<<prob<<endl;
    }
}
