class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i = students.size() - 1 ; i>=0;i--)
        {
            q.push(students[i]);
        }
        int ind = 0;
         int cnt = 0;
        while(!q.empty())
        {   
            int curr = q.front();
            q.pop();
            if(curr != sandwiches[ind] ) {
                cnt++;
                q.push(curr);
            }
         else
         {
             cnt=0;
             ind++;
         }
         if(cnt == q.size()) break;
        }
        return q.size();
    }
};