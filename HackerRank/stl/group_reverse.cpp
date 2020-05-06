#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    int T,N,K;
	int i,j,x,index=0,rem;  
    cin>>T;
    for(j=0;j<T;j++)
    {    
        vector <int> elements;
        index=0;
        if(T>=1&&T<=200)
        {
            cin>>N>>K;
            for(i=0;i<N;i++)
            {
                cin>>x;
                elements.push_back(x);
            }
            rem=N%K;
            auto a=elements.begin();
            while(index<(N-rem))
            {
                reverse(a+index,a+index+K);
                index=index+K;
            }
            if(rem>0)
                reverse(a+index,a+N);
            for(auto y=elements.begin();y!=elements.end();y++)
                cout<<*y<<" ";
            cout<<endl;
        }
    }
    return 0;
}
