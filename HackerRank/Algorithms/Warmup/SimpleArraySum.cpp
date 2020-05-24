/* https://www.hackerrank.com/challenges/simple-array-sum/problem?h_r=next-challenge&h_v=zen
      Simple Array Sum  */

int simpleArraySum(vector<int> ar) {
    int sum=0;
    for(int a: ar)
        sum+=a;
    return sum;
}
