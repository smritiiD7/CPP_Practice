class Solution {
public:
    int convertToNum(string s)
    {
        string required="";
        for(int i=0;i<s.length();i++)
        {
            required+=s[i]-'1';
        }
       // cout<<required;
        //int i=0;
        //while(required[i]=='0')
         //   i++;
        int ans = stoi(required);
        return ans;

    }
    
    
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
     int firstNum = convertToNum(firstWord);
     int secondNum = convertToNum(secondWord);
     int targetNum = convertToNum(targetWord);
        
    if(firstNum+secondNum==targetNum)
        return true;
        return false;
    }
};