typedef pair<int,int> pp;
class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      /*int i,j,k;
        priority_queue<pp,vector<pp>,greater<pp>> pq;
        for(i=0;i< nums.size()-2;i++)
        {
            for(j=i+1;j<nums.size()-1;j++)
            {
                for(k=j+1;k<nums.size();k++)
                {
                    int sum = nums[i]+nums[j]+nums[k];
                    pq.push({abs(target-sum),sum});
                }
            }
        }
        return pq.top().second;
        */
        
        sort(nums.begin(),nums.end());
        int diff = INT_MAX,ans=0;
        for(int i=0;i< nums.size();i++)
        {
            int left = i+1;
            int right = nums.size()-1;
            
            while(left<right)
            {
                int tempSum = nums[i]+nums[left]+nums[right];
                if(abs(target-tempSum)<diff)
                {
                    diff = abs(target-tempSum);
                    ans=tempSum;
                }
                if(tempSum == target) return tempSum;
                else if(tempSum<target)
                    left++;
                else
                    right--;
            }
        }
        return ans;
    }
};