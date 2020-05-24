/* https://www.hackerrank.com/challenges/diagonal-difference/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
    Diagonal Difference */


int diagonalDifference(vector<vector<int>> arr) {

    int sum1=0,sum2=0,i,j;
    int len=arr.size();
    i=j=0;
    while(i<len)
    {
        sum1+=arr[i++][j++];
    }
    i=0;
    j=len-1;
    while(i<len)
    {
        sum2+=arr[i++][j--];
    }
    return abs(sum1-sum2);
}
