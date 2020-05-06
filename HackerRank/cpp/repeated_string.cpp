#include<iostream>
using namespace std;
int main()
{
   char s[100];
   long i,n,len,count=0,n1,rem,ca=0;
   cin>>s;
   cin>>n;
   for(len=0;s[len]!='\0';len++)
   {
       if(s[len]=='a')
        ca++;
   }
   if(ca==len)
        cout<<n;
   else if(ca==0)
        cout<<"0";
    else
    {
        n1=n/len;
        rem=n%len;
        count=ca*n1;
        if(rem!=0)
        {
            for(i=0;i<rem;i++)
            {
                if(s[i]=='a')
                    count++;
            }
        }
    }
   cout<<count;
   return 0;
}

