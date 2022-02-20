class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int cnt=1;
        int x1=intervals[0][0];
        int x2=intervals[0][1];
        for(int i=1;i<intervals.size();i++)
        {
            if(x1<intervals[i][0] &&  intervals[i][1]>x2 )
                cnt++;
            if(intervals[i][1]>x2)
            {
                x1=intervals[i][0];
                x2=intervals[i][1];
            }
        }
        return cnt;
    }
};