/* https://leetcode.com/explore/interview/card/top-interview-questions-medium/108/trees-and-graphs/792/
    Number of Islands   */

class Solution {
public:
    void markIslands(vector<vector<char>>& grid, int i, int j)
    {
        if(i<0||i>=grid.size())
            return;
        if(j<0||j>=grid[0].size())
            return;
        if(grid[i][j]=='1')
        {
            grid[i][j]='2';
            markIslands(grid,i+1,j);
            markIslands(grid,i-1,j);
            markIslands(grid,i,j+1);
            markIslands(grid,i,j-1);
        }
        else
            return;
    }
    int numIslands(vector<vector<char>>& grid) {
        int number=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    number++;
                    markIslands(grid,i,j);
                }
            }
        }
        return number;
    }
};
