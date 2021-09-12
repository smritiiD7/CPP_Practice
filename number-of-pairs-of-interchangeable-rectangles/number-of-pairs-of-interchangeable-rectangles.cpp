class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        long long i,j;
        double ratio;
        unordered_map<double,int> mp;
        long long cnt=0;
        for(i=0;i<rectangles.size();i++)
        {
            ratio=(double)rectangles[i][0]/rectangles[i][1];
            mp[ratio]++;
        }
        for(auto i : mp)
        {
            long long div=0;
            if(i.second>1)
            {
                long long t=i.second-1;
                while(t>=0) //Counting the number of  pairs
                {
                    div+=t;
                    t--;
                }
            }
            if(i.second>1) 
            cnt+=div;
        }
        return cnt;
    }
};