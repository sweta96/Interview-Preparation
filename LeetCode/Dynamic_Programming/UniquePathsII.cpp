/* https://leetcode.com/problems/unique-paths-ii/submissions/
    63. Unique Paths II */

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int n=obstacleGrid.size();
        int m=obstacleGrid[0].size();
        int array[n][m];
        if(obstacleGrid[0][0]==0)
                array[0][0]=1;
            else
                return 0;
        for(int i=1;i<m;i++)
        {
            if(obstacleGrid[0][i]==0)
                array[0][i]=array[0][i-1];
            else
                array[0][i]=0;
        }
        for(int i=1;i<n;i++)
        {
            if(obstacleGrid[i][0]==0)
                array[i][0]=array[i-1][0];
            else
                array[i][0]=0;
        }
        for(int i=1;i<n;i++)
        {
            for(int j=1;j<m;j++)
            {
                if(obstacleGrid[i][j]==0)
                    array[i][j]=array[i-1][j]+array[i][j-1];
                else
                    array[i][j]=0;
            }
        }
        return array[n-1][m-1];
    }
};
