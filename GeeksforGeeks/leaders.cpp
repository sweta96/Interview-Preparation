/* Question: https://practice.geeksforgeeks.org/problems/leaders-in-an-array/0
    Leaders in an Array */

#include <iostream>
#include <vector>
using namespace std;

int main() {
	int T,N,max,temp,c=0;
	vector<int> numbers;
	vector<int> leaders;
	
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        c=0;
        cin>>N;
        for(int j=1;j<=N;j++)
        {
            cin>>temp;
            numbers.push_back(temp);
        }
        max=numbers[N-1];
        leaders.push_back(max);
        c++;
        for(int j=N-2;j>=0;j--)
        {
            if(numbers[j]>=max)
            {
                max=numbers[j];
                leaders.push_back(max);
                c++;
            }
        }
        for(int j=c-1;j>=0;j--)
        {
            cout<<leaders[j]<<" ";
        }
        cout<<endl;
        leaders.clear();
        numbers.clear();
    }
	return 0;
}
