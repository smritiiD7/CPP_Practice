class Solution {
public:
    int findMin(vector<int>& a) {
      int ans=*min_element(a.begin(), a.end());  
        return ans;
    }
};