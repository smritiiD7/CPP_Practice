class Solution {
public:
    unordered_map<char,vector<string>> mp;
    vector<string> ans;
    void backtrack(int firstIndex,string curr, string digits)
    {
        int n = digits.size();
        if(firstIndex==n)
        {
            ans.push_back(curr);
            return;
        }
        vector<string> v = mp[digits[firstIndex]];
        for(int i=0;i<v.size();i++)
        {
            string s = v[i];
            curr+=s;
            backtrack(firstIndex+1,curr,digits);
            curr.pop_back();
        }
    }
   
       
    
    vector<string> letterCombinations(string digits) {
        if(digits=="")
        {
            return {};
        }
        
    mp['2'] = {"a","b","c"};
	mp['3'] = {"d","e","f"};
	mp['4'] = {"g","h","i"};
	mp['5'] = {"j","k","l"};
	mp['6'] = {"m","n","o"};
	mp['7'] = {"p","q","r","s"};
	mp['8'] = {"t","u","v"};
	mp['9'] = {"w","x","y","z"};
        backtrack(0,"",digits);
        return ans;
      
    }
};