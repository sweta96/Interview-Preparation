#include <bits/stdc++.h>
 
using namespace std;
 
string twoStrings(string s1, string s2) 
{
   int i;
   map <char,int> ms1,ms2;
   for(i=0;s1[i]!='\0';i++)
	ms1[s1[i]]++;
   for(i=0;s2[i]!='\0';i++)
	ms2[s2[i]]++;
   
   for(int i=0;s1[i]!='\0';i++)
   {
 	if(ms2[s1[i]]!=0)
		return "YES";
   }
   return "NO";
}
 
int main()
{
   int q;
   cin >> q;
   string s1,s2;
   for (int i = 0; i < q; i++) 
{
       cin>>s1;
       cin>>s2;
 
       string result = twoStrings(s1, s2);
 
       cout << result << "\n";
   }
 
   return 0;
}
 

