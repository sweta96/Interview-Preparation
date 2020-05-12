/* https://leetcode.com/explore/challenge/card/may-leetcoding-challenge/535/week-2-may-8th-may-14th/3326/
    Flood Fill  */

class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int color,id;
	    color=image[sr][sc];
        image[sr][sc]=newColor+1;
        id=sr-1;
        if(id!=-1)
        {
            if(image[id][sc]==color)
                image=floodFill(image,id,sc,newColor);
        }
        id=sr+1;
        if(id<image.size())
        {
            if(image[id][sc]==color)
                image=floodFill(image,id,sc,newColor);
        }
        id=sc-1;
        if(id!=-1)
        {
            if(image[sr][id]==color)
                image=floodFill(image,sr,id,newColor);
        }
        id=sc+1;
        if(id<image[0].size())
        {
            if(image[sr][id]==color)
                image=floodFill(image,sr,id,newColor);
        }
        image[sr][sc]=newColor;
        return image;
    }
};

