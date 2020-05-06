#/*
# + + + #
- # + # -
- - # - -
- # + # -
# + + + #
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    char arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j||j==(n-i-1))
                arr[i][j]='#';
            else if(j>i && j<(n-i-1))
                arr[i][j]='+';
            else if(i>(n/2))
                {
                    if(j<i && j>(n-i-1))
                        arr[i][j]='+';
                    else if(j==(n-i-1))
                        arr[i][j]='#';
                    else
                        arr[i][j]='-';
                }
            else
                arr[i][j]='-';
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
