class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        int tnr = 0, cnt = 0, tim = 0;
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                if(grid[i][j] != 0) tnr++;
            }
        }
        int nxt_x[4] = {0,0,1,-1};
        int nxt_y[4] = {1,-1,0,0};
        while(!q.empty()){
            int size = q.size();
            cnt+=size;
            while(size--){
                int x = q.front().first;
                int y = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nx = x+nxt_x[i], ny = y+nxt_y[i];
                    if(nx<0 || ny<0 || nx>=n || ny>=m || grid[nx][ny]!=1) continue;
                    grid[nx][ny] = 2;
                    q.push({nx,ny});
                }
            }
            if(!q.empty()) tim++;
        }
        if(cnt==tnr) return tim;
        else return -1;
    }
};