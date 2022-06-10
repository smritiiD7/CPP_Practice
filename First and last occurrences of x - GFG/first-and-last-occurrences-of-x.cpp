// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
    // code here
    int firstOccurance, lastOccurance;
    int i=0,j=n-1;
    bool frontFlag=false, backFlag=false;
    
    while(i<n)
    {
        if(arr[i] == x) {
            firstOccurance=i;
            frontFlag = true;
            break;
        }
        i++;
    }
    
    while(j>=0)
    {
        if(arr[j] == x){
            lastOccurance=j;
            backFlag = true;
            break;
        }
        j--;
    }
   
   if(frontFlag == false || backFlag == false) return {-1,-1};
   return {i,j};
   
}

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}


  // } Driver Code Ends