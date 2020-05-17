/*https://practice.geeksforgeeks.org/problems/minimize-the-heights/0/
      Minimize the Heights  */

#include <bits/stdc++.h>
using namespace std;

int mini_heights(int array[], int N,int K)
{
    int max,min,check,diff,first,last;
    if(N==1)
        return 0;
    first=array[0];
    last=array[N-1];
    check=last-first;
    if(check<K)
        return check;
    min=first+K;
    max=last-K;
    if(min>max)
    {
        min=max;
        max=first+K;
    }
    for(int j=1;j<N-1;j++)
    {
        first=array[j]-K;
        last=array[j]+K;
        if(first<min)
        {
            if(last>max)
            {
                check=min-first;
                diff=last-max;
                if(diff>check)
                    min=first;
                else
                    max=last;
            }
        }
    }
    return (max-min);
}

int main() {
	int T,N,K;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>K>>N;
	    int array[N],max,min;
	    for(int j=0;j<N;j++)
	    {
	        cin>>array[j];
	        if(j==0)
	            max=min=array[j];
	        else if(max<array[j])
	            max=array[j];
	        else if(min>array[j])
	            min=array[j];
	    }
	    sort(array,array+N);
	    cout<<mini_heights(array,N,K)<<endl;
	}
	
	return 0;
}
