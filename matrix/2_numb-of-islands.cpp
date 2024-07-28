class Solution {
  public:
    // Function to find the number of islands.
    //simple dfs
    void dfs(int i, int j, vector<vector<char>>& grid, vector<vector<int>>& vis, int n, int m)
    {
        vis[i][j]=1;
        int dx[8] = {1,0,-1,0,1,-1,1,-1};
        int dy[8] = {0,1,0,-1,1,-1,-1,1};
        for(int k=0; k<8; k++)
        {
            int newi = i+dx[k];
            int newj = j+dy[k];
            if(newi>=0 && newi<n && newj>=0 && newj<m)
            {
                if(vis[newi][newj]!=1 && grid[newi][newj]=='1')
                {
                    dfs(newi,newj,grid, vis, n, m);
                }
            }
        }
        return;
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vis[i][j]!=1 && grid[i][j]=='1')
                {
                    dfs(i,j,grid,vis,n,m);
                    cnt++;
                }
            }
        }
        return cnt;
    }
};