class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        vector<int>even,odd,ans;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2 == 0)
                even.push_back(nums[i]);
            else
                odd.push_back(nums[i]);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end(),greater<int>());
        int oddIndex=0,evenIndex=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2 ==0)
            {
                int k = even[evenIndex];
                ans.push_back(k);
                evenIndex++;
            }
            else 
            {
                int k = odd[oddIndex];
                ans.push_back(k);
                oddIndex++;
            }
        }
        return ans;
    }
};