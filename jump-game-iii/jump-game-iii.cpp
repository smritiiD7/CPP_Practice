class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        if(arr[start] == 0) return true;
        queue<int> q;
        int n = arr.size();
        vector<bool> visited(n,false);
        
        q.push(start);
        visited[start]=true;
        
        while(!q.empty())
        {
            int curr_index = q.front();
            q.pop();
            
            if(arr[curr_index] == 0) return true;
            
            int new_index = curr_index + arr[curr_index];
            if(new_index <n && visited[new_index] == false)
            {
                q.push(new_index);
                visited[new_index] = true;
            }
            new_index = curr_index - arr[curr_index];
            if(new_index>=0 && visited[new_index] == false)
            {
                q.push(new_index);
                visited[new_index] = true;
            }
        }
        return false;
    }
};