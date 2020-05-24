/* https://www.hackerrank.com/challenges/mini-max-sum/problem
    Mini-Max Sum  */

void miniMaxSum(vector<int> arr) {

    sort(arr.begin(),arr.end());
    unsigned long long int mini=0,max=0;
    for(int i=0;i<5;i++)
    {
        if(i<4)
            mini+=arr[i];
        if(i>0)
            max+=arr[i];
    }
    cout<<mini<<" ";
    cout<<max<<endl;

}
