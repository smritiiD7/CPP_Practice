class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        vector<int> v{first};
        int i;
        for(i=0;i<encoded.size();i++)
        {
            v.push_back(encoded[i]^v[i]);
               
        }
        return v;
        
    }
};