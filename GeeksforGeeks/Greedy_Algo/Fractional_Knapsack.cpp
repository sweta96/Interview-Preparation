/*https://practice.geeksforgeeks.org/problems/fractional-knapsack/0
    Fractional Knapsack  */

#include <bits/stdc++.h>
using namespace std;

struct Item{
    int value;
    int weight;
};

bool cmp(struct Item a, struct Item b) 
{ 
    double r1 = (double)a.value / a.weight; 
    double r2 = (double)b.value / b.weight; 
    return r1 > r2; 
} 

int main() {
    int T,N,W;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>N>>W;
        int value,weight;
        struct Item array[N];
        for(int i=0;i<N;i++)
        {
            cin>>value>>weight;
            array[i].value=value;
            array[i].weight=weight;
        }
        int n=sizeof(array)/sizeof(array[0]);
        sort(array,array+n,cmp);
        int cur_weight=0,remaining;
        double total_value=0.0;
        for(int i=0;i<N;i++)
        {
            if(cur_weight+array[i].weight<=W)
            {
                cur_weight+=array[i].weight;
                total_value+=array[i].value;
            }
            else
            {
                remaining = W-cur_weight;
                if(remaining!=0)
                {
                    total_value+=(array[i].value*((double)remaining/array[i].weight));
                    break;
                }
            }
        }
        cout<<fixed<<setprecision(2)<<total_value<<endl;
    }
	return 0;
}
