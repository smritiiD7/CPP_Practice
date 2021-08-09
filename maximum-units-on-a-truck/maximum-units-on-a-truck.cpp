class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int i;
        for(i=0;i<boxTypes.size();i++)
        {
            swap(boxTypes[i][0],boxTypes[i][1]);
        }
        sort(boxTypes.begin(),boxTypes.end(),greater<vector<int>>());
        int total=0;
        for(auto k: boxTypes)
        {
            int curr_box=min(k[1],truckSize);
            total+=curr_box*k[0];
            truckSize-=curr_box;
            if(truckSize==0) return total;
        }
        return total;
    }
};