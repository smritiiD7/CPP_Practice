class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int ans=0;
        sort(people.begin(),people.end(),greater<>());
      int left=0,right=people.size()-1;
        while(left<=right)
        {
            if(people[left]+people[right]<=limit)
            {
                right--;
            }
            left++;
            ans++;
           
        }
        return ans;
    }
};