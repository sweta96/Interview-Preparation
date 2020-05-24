/*https://www.hackerrank.com/challenges/a-very-big-sum/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
      A Very Big Sum */

long aVeryBigSum(vector<long> ar) {

    long long int sum=0;
    for(long a:ar)
        sum+=a;
    return sum;
}
