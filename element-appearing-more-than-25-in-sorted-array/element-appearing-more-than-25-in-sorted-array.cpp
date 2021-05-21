class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int k=arr.size()/4,res=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==arr[i+k])
                return arr[i];
        }
       
        return res;
        
    }
};