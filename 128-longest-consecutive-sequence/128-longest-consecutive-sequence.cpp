class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0,len=0;
         for(int i : nums )
         {
             if(s.find(i-1)==s.end())
             {
                 len=1;
                 int num=i+1;
                 while(s.find(num)!=s.end())
                 {
                     len++;
                     num++;
                 }
                  ans=max(len,ans);
             }
         }
        return ans;
    }
};