class Solution {
public:
    vector<int> minOperations(string boxes) {
        int i,j,cnt=0;
        vector<int> v;
        for(i=0;i<boxes.length();i++)
        {
            cnt=0;
            for(j=0;j<boxes.length();j++)
            {
            if(boxes[j]=='1'&&j!=i)
                cnt+=abs(i-j);
            }
            v.push_back(cnt);
            
    }
        return v;
    }
};