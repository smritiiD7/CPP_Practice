class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       /* double ans; //brute fucking force
        double maxi=INT_MIN;
        int n = nums.size();
        if(n==1) return double(nums[0]);
        for(int i=0;i<nums.size();i++)
        {
           long long sum= 0;
            if(i<n-k+1){
            for(int j=i;j<i+k;j++)
            {
                sum+=nums[j];
            }
            double avg =(double) sum/k;
           // maxi = max(avg,maxi);
                if(avg>=maxi)
                    maxi=avg;

            }
        }
        return maxi; */
        
       double ans=0;
        int n = nums.size();
        double sum=0;
        double maxi = INT_MIN;
        int i;
        for(i=0;i<k;i++)
        {
            sum+=nums[i];
        }
       maxi = sum;
        int  j =0;
       while(i<n)
        {
            sum+=nums[i++];
           sum-=nums[j++];
           maxi = max(maxi,sum);
            
        }
        return maxi/k;
        
        
        
    }
};