class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,one=0,two=0,i;
        for(int i: nums)
        {
            if(i==0)
                zero++;
            else if(i==1)
                one++;
            else
                two++;
        }
        nums.clear();
        for(i=0;i<zero;i++)
        {
            nums.push_back(0);
        }
        for(i=0;i<one;i++)
        {
            nums.push_back(1);
        }
        for(i=0;i<two;i++)
        {
            nums.push_back(2);
        }
    
        
    }
};