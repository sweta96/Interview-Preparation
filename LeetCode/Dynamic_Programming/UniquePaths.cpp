/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/111/dynamic-programming/808/
    Unique Paths  */

class Solution {
public:
    int uniquePaths(int m, int n) {
        int array[n][m];
        array[0][0]=1;
        for(int i=1;i<m;i++)
            array[0][i]=1;
        for(int i=1;i<n;i++)
            array[i][0]=1;
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
                array[i][j]=array[i-1][j]+array[i][j-1];
        }
        return array[n-1][m-1];
    }
};
