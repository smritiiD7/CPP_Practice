class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0,j=people.size()-1,cnt=0;
        sort(people.begin(),people.end());
        while(i<=j)
        {
            cnt++;
            if(people[i]+people[j]<=limit)
            {
                i++;
            }
            j--;
        }
        return cnt;
    }
};