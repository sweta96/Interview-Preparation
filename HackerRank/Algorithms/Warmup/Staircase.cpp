/* https://www.hackerrank.com/challenges/staircase/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen
  Staircase   */

void staircase(int n) {
    int i=0,j=0;
    for(i=n;i>0;i--)
    {
        j=1;
        while(j<i)
        {
            cout<<" ";
            j++;
        }
        while(j<=n)
        {
            cout<<"#";
            j++;
        }
        cout<<endl;
    }
}
