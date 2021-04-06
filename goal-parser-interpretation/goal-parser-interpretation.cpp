class Solution {
public:
    string interpret(string c) {
            int i;
            string s="";
            for(i=0;i<c.length();i++)
            {
                    if(c[i]=='G')
                    {
                            s+='G';
                    }
                     if(c[i]=='('&&c[i+1]==')')
                    {
                            s+='o';
                             i+=1;
                    }
                     if(c[i]=='('&&c[i+1]=='a')
                               {
                                       s+="al";
                                       i+=3;
                               }
            }
                               return s;
            
            
        
    }
};