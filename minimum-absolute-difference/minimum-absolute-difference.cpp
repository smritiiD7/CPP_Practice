class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int i,j,min=INT_MAX;
        vector<vector<int>> v2;
        
        for(i=0;i<arr.size()-1;i++)
        {
            if(abs(arr[i]-arr[i+1])<min)
            {
                min=abs(arr[i]-arr[i+1]);
            }
        }
        for(i=0;i<arr.size()-1;i++){
        if(abs(arr[i]-arr[i+1])==min)
        {
            v2.push_back({arr[i],arr[i+1]});
        }
        }
        return v2;
        
    }
};