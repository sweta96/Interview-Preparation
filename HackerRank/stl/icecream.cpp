#include<iostream>
#include<vector>
#include<map>
using namespace std;

void icecream(vector<int> cost,int money)
{
	int n,i,j,x;
    n=cost.size();
    int ans1,ans2;
    map<int,int> present;
    for(i=0;i<n;i++)
        present[cost[i]]++;
    for(i=0;i<n;i++)
    {
        if(cost[i]<money)
        {
            x=money-cost[i];
            if(x==cost[i])
            {
                if(present[x]>1)
                {
                    ans1=cost[i];
                    ans2=x;
                    break;
                }
            }
            else
            {
                if(present[x]>0)
                {
                    ans1=cost[i];
                    ans2=x;
                    break;
                }
            }
        }
    }
    int k=0;
    for(i=0;i<n;i++)
    {
        if((cost[i]==ans1||cost[i]==ans2)&&k<2)
        {
            cout<<(i+1)<<" ";
            k++;
        }
    }
    cout<<endl;
}
int main()
{
	int n,i,x,money;
	cin>>money;
	cin>>n;
	vector<int> cost;
	for(i=0;i<n;i++)
	{
		cin>>x;
		cost.push_back(x);
	}
	icecream(cost,money);
	return 0;
}
