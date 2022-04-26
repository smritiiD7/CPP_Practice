class Solution {
public:
    long long smallestNumber(long long num) {
        if(num == 0) return 0;
        long long result;
        if(num<0) //for negative number bsdk bhak
        {
            num=-num;
            string n = to_string(num);
            sort(n.begin(),n.end(),greater<char>());
            result = stoll(n);
            return -result;
        }
        else{
    
            string n = to_string(num);
            sort(n.begin(),n.end());
            int i=0;
            while(n[i]=='0'){
                i++;
            } 
            result = n[i]-'0';
            for(int j=0;j<n.length();j++)
            {
                if(i==j) continue;
                result=result*10+n[j]-'0';
                    
            } 
        }
                 return result;
                
    }
};