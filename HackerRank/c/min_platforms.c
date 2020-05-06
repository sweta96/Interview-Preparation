#include <stdio.h>

int main() {
	int T,N;
	int arrival[1000],departure[1000];
	int min[100];
	int arr_dep[1000][2];
	int i,j,k,l=0,flag;
	scanf("%d",&T);
	if(T>=1&&T<=100)
	{
	    for(i=0;i<T;i++)
	    {
	        l=0;
	        flag=0;
	        scanf("%d",&N);
	        if(N>=1&&N<=1000)
	        {
	            for(j=0;j<N;j++)
	                scanf("%d ",&arrival[j]);
	            for(j=0;j<N;j++)
	                scanf("%d ",&departure[j]);
	        }
	        else
	            return 0;
	        if(arrival[0]<=2359 && arrival[j]>=0000 && departure[j]>=0000 && departure[0]<=2359)
	        {
	            arr_dep[l][0]=arrival[0];
	            arr_dep[l][1]=departure[0];
	            l++;
	        }
	        else
	            return 0;
	        for(j=1;j<N;j++)
	        {
	            flag=0;
	            if(arrival[j]<=2359 && arrival[j]>=0000 && departure[j]>=0000 && departure[j]<=2359)
	            {
	                for(k=0;k<l;k++)
	                {
	                    if(arrival[j]>arr_dep[k][1])
	                    {
	                        arr_dep[k][0]=arrival[j];
	                        arr_dep[k][1]=departure[j];
	                        k=l;
	                    }
	                    else
	                        flag++;
	                }
	                if(flag==l)
	                {
	                    arr_dep[l][0]=arrival[j];
	                    arr_dep[l][1]=departure[j];
	                    l++;
	                }
	            }
	            else
	                return 0;
	        }
	        min[i]=l;
	    }
	}
	else
	    return 0;
	for(i=0;i<T;i++)
	    printf("%d\n",min[i]);
	return 0;
}
