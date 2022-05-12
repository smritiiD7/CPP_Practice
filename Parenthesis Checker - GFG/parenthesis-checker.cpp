// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool matchChar(char ch1, char ch2)
    {
        return (ch1=='{' && ch2=='}') || (ch1=='[' && ch2==']') || (ch1=='(' && ch2==')');
    }
    bool ispar(string x)
    {
        // Your code here
        stack<char> st;
        for(char ch : x)
        {
            if(ch=='(' || ch=='{' || ch=='[' )
            st.push(ch);
            else
            {
                if(st.empty()==true) return false;
                else if (matchChar(st.top(),ch)==false) return false;
                else st.pop(); //match mil gya bey
            }
        }
       // return st.empty()==true;
       return st.size()==0;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends