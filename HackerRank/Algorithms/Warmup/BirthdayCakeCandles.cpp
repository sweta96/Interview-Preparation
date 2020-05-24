/* https://www.hackerrank.com/challenges/birthday-cake-candles/problem
    Birthday Cake Candles  */

int birthdayCakeCandles(vector<int> ar) {
    int max=ar[0];
    map<int,int> freq;
    for(int a:ar)
    {
        if(a>max)
            max=a;
        freq[a]++;
    }
    return freq[max];
}
