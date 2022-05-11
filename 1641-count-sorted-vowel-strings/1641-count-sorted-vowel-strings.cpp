class Solution {
public:
    /*int helper(int n,vector<char>&v,vector<string>&temp,string str,int index){
        if(str.length()==n)
        {
            temp.push_back(str);
            return 0;
        }
        
        for(int i=index;i<v.size();i++)
        {
            str+=v[i];
            helper(n,v,temp,str,i);
            str.pop_back();
        }
        return temp.size();
    }
    */
    int ans=0;
    
    void helper(int n , int index)
    {
        if(n==0){
            ans++;
            return;
        }
        for(int i=index;i<5;i++)
        {
            helper(n-1,i);
        }
    }
    
    
    int countVowelStrings(int n) {
       helper(n,0);
        return ans;
    }
};