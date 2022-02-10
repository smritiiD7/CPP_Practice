class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
     /* unordered_set<int> s;
        int cnt=0;
        int pre_sum=0;
        for(int i=0;i<nums.size();i++)
        {
            pre_sum+=nums[i];
            if( s.find(pre_sum-k)!=s.end())
                cnt++;
            if(pre_sum == k)
               cnt++;
            
            s.insert(pre_sum);
        }
        return cnt;
    } */
        
        /*int sum=0;
        int res = INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum=0;
        for(int j=i;j<nums.size();j++)
        {
            sum+=nums[j];
            if(sum == k)
            res=max(res,j-i+1);
        }
        }
        return res;
    }*/
        int cnt=0,sum=0;
        unordered_map<int,int> mp;
        mp[0]=1;
        for(int i=0;i<nums.size();i++)
        {
           sum+=nums[i];
            if(mp.find(sum-k)!=mp.end())
            {
                cnt+=mp[sum-k];
            }
            mp[sum]++;
        }
        return cnt;
    }
};