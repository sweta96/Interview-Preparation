/* https://www.hackerrank.com/challenges/plus-minus/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
    Plus Minus  */

void plusMinus(vector<int> arr) {
    double len,sum_positive=0,sum_negative=0,sum_zero=0;
    len=arr.size();
    for(int i=0;i<len;i++)
    {
        if(arr[i]==0)
            sum_zero++;
        else if(arr[i]<0)
            sum_negative++;
        else
            sum_positive++;
    }
    cout<<fixed<<setprecision(6)<<(sum_positive/len)<<endl;
    cout<<fixed<<setprecision(6)<<(sum_negative/len)<<endl;
    cout<<fixed<<setprecision(6)<<(sum_zero/len)<<endl;
}
