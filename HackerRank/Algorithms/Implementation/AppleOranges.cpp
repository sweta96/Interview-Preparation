/* https://www.hackerrank.com/challenges/apple-and-orange/problem
    Apple and Orange  */

void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int counta=0,countb=0;
    for(int& apple:apples)
    {
        apple+=a;
        if(apple>=s && apple<=t)
            counta++;
    }
    for(int& orange:oranges)
    {
        orange+=b;
        if(orange>=s && orange<=t)
            countb++;
    }
    cout<<counta<<endl;
    cout<<countb<<endl;

}
