class Solution {
public:
void generateCombinationSum(vector<int>&candidates,vector<int> temp,vector<vector<int>>&ans,int target,int index)
{
    if(target==0)
    {
        ans.push_back(temp);
        return;
    }
    
    for(int i=index;i<candidates.size();i++)
    {   if(candidates[i] > target) break;
        if(i>index  &&  candidates[i-1]==candidates[i]) continue;
        temp.push_back(candidates[i]);
    generateCombinationSum(candidates,temp,ans,target-candidates[i],i+1);
        temp.pop_back();
    
    }
}
    
    
    
    
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<int> temp;
        vector<vector<int>> ans;
        generateCombinationSum(candidates,temp,ans,target,0);
        return ans;
        
    }
};