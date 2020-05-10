/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3323/
    Check If It Is a Straight Line   */

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int y,y1,x,x1,c,m;
        x=coordinates[0][0];
        x1=coordinates[1][0];
        y=coordinates[0][1];
        y1=coordinates[1][1];
        if(x==x1)
        {
            for(int i=2;i<coordinates.size();i++)
            {
                x1=coordinates[i][0];
                if(x1!=x)
                    return false;
            }
        }
        else
        {
            m=(y-y1)/(x-x1);
            c=y1-(m*x1);
            for(int i=2;i<coordinates.size();i++)
            {
                x=coordinates[i][0];
                y=coordinates[i][1];
                if(y!=(m*x+c))
                    return false;
            }
        }
        return true;
    }
};
