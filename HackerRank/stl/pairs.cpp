#include<iostream>
#include<math.h>
#include<vector>
using namespace std;
int main()
{    
    long int T,c,i,j,nx,ny,a,k;
    cin>>T;
    if(T>=1&&T<=100)
    {
        for(k=0;k<T;k++)
        {
            vector <int> x;
            vector <int> y;
            c=0;
            cin>>nx>>ny;
            if(nx>=1 && ny>=1 && nx<=10000 && ny<=10000)
            {
                for(i=0;i<nx;i++)
                {
                    cin>>a;
                    if(a>=1 && a<=1000)
                        x.push_back(a);
                    else
                        return 0;
                }
                for(i=0;i<ny;i++)
                {
                    cin>>a;
                    if(a>=1 && a<=1000)
                        y.push_back(a);
                    else
                        return 0;
                }
                for(i=0;i<nx;i++)
                {
                    for(j=0;j<ny;j++)
                    {
                        if(pow(x[i],y[j])>pow(y[j],x[i]))
                            c++;
                    }
                }
            }
            else
                return 0;
            cout<<c<<endl;
        }
    }   
    else
        return 0;
    return 0;
}
