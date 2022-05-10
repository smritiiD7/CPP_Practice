class Solution {
public:
    void generateCombinations(int n,int k, int index, vector<int>&temp, vector<vector<int>>& ans)
    {
        if(temp.size()==k)
        {
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<n+1;++i)
        {
            temp.push_back(i);
            generateCombinations(n,k,i+1,temp,ans);
            temp.pop_back();
            
        }
      //  return ans;
        
    }
    
    
    
    vector<vector<int>> combine(int n, int k) {
      vector<int> temp;
      vector<vector<int>> ans;
        
     generateCombinations(n,k,1,temp,ans);
        return ans;
    }
};