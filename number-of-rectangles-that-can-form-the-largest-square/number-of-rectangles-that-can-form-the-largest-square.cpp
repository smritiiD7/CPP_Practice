class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
        int i,j,maxLen=0,res=0;
        for(i=0;i<rectangles.size();i++)
        {
            int side=min(rectangles[i][0],rectangles[i][1]);
            maxLen=max(maxLen,side);
        }
        for(i=0;i<rectangles.size();i++)
        {
            int k=min(rectangles[i][0],rectangles[i][1]);
            if(k==maxLen)
            {
                res++;
            }
        }
        return res;
    }
};