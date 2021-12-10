class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int n = num.size();
        int mid,high=n-1,low=0;
        while(low<high)
        {
            if(num[low]+num[high] == target)
                return {low+1,high+1};
            if(num[low] + num[high] > target)
            {
                high--;
            }
            else low++;
        }
        return {};
    }
};