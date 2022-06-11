class Solution {
public:
    bool checklowerCase(string str)
    {
        for(int i=0;i<str.length();i++)
        {
            if(islower(str[i])) return true;
        }
        return false;
    }
    
    bool checkupperCase(string str)
    {
         for(int i=0;i<str.length();i++)
        {
            if(isupper(str[i])) return true;
        }
        return false;
    }
    
    bool checkDigit(string str)
    {
      for(int i=0;i<str.length();i++)
        {
           if(isdigit(str[i])) return true;
        }
        return false;
    }
    
    bool checkSpecialCharacter(string str)
    {
        for(int i=0;i<str.length();i++)
        {
           if(str[i] == '!'||str[i]=='@'||str[i]=='#'||str[i]=='$'||str[i]=='%'||str[i]=='^'||str[i]=='&'||str[i]=='*'||str[i]=='('||str[i]==')'||str[i]=='-'|| str[i]=='+')
                return true;
        }
        return false;
    }
    
    
    bool consecutiveAlpha(string str)
    {
        for(int i=0;i<str.length()-1;i++)
        {
           if(str[i]==str[i+1]) return false; 
        }
        return true;
    }
    
    
    bool strongPasswordCheckerII(string password) {
        if(password.length()<8) return false;
      return checklowerCase(password) && checkupperCase(password) && checkDigit(password) && checkSpecialCharacter(password) && consecutiveAlpha(password);
    }
};