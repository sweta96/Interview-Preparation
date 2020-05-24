/* https://www.hackerrank.com/challenges/compare-the-triplets/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
    Compare the triplets  */

vector<int> compareTriplets(vector<int> a, vector<int> b) {

    vector<int> score(2,0);
    for(int i=0;i<3;i++)
    {
        if(a[i]>b[i])
            score[0]++;
        else if(a[i]<b[i])
            score[1]++;
    }
    return score;
}
