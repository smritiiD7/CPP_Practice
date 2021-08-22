class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        set<int> s;
        int cnt=0;
        int min=INT_MAX;
        int integerform;
        string ans="";
        for(string k: nums)
        {
            int kc=stoi(k,0,2);//String to integer conversion
            s.insert(kc);//inserting in the set 
          if(kc<min) //here we will be finding the minimum element present in the list so as to get the range of starting no.
            {
                min=kc;
            }
            cnt++;//number of elements in the list
        }
        for(auto i: s)
        {
            if(s.find(++min)==s.end())//searching for the missing number(the one not appearing)
            {
                integerform=min;
                break;
            }
        }
        string str =bitset<16>(integerform).to_string();//Converting the integerform (missing num) into string
        reverse(str.begin(),str.end());
        for(int i=0;i<cnt;i++)//printing the binary form of length n, as mentioned in ques.
        {
          ans+=str[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};