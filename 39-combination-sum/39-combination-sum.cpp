class Solution {
public:
void generateCombinationSum(vector<int>&candidates,vector<int>&temp,vector<vector<int>> &ans,int target,int index)
{
    //base fucking case
    if(target<0)
        return ;
    if(target==0){
        ans.push_back(temp);
        return;
    }
    
    for(int i=index;i<candidates.size();i++)
    {
        temp.push_back(candidates[i]);
        generateCombinationSum(candidates,temp,ans,target-candidates[i],i);
        temp.pop_back();
    }
}
    
    
    
    
    
    
    
    
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
 
    vector<int> temp;
    vector<vector<int>> ans;
    
    
    generateCombinationSum(candidates,temp,ans,target,0);
    return ans;

        
    }
};