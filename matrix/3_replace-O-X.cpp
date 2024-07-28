class Solution{
public:

    void dfs(int i, int j, vector<vector<int>> &vis,vector<vector<char>> &mat, int delrow[], int delcol[])
    {
        vis[i][j]=1;
        int n=mat.size();
        int m=mat[0].size();
        for(int k=0; k<4; k++)
        {
            int row=i+delrow[k];
            int col=j+delcol[k];
            if(row>=0 && row<n && col>=0 && col<m && !vis[row][col] && mat[row][col]=='O')
            {
                dfs(row,col,vis,mat, delrow, delcol);
            }
        }
        return;
    }
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        vector<vector<int>> vis(n, vector<int>(m,0));
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        for(int j=0; j<m; j++)
        {
            if(!vis[0][j] && mat[0][j]=='O')
            {
                dfs(0,j,vis,mat, delrow, delcol);
            }
            if(!vis[n-1][j] && mat[n-1][j]=='O')
            {
                dfs(n-1,j,vis,mat, delrow, delcol);
            }
        }
        
        for(int j=0; j<n; j++)
        {
            if(!vis[j][0] && mat[j][0]=='O')
            {
                dfs(j,0,vis,mat, delrow, delcol);
            }
            if(!vis[j][m-1] && mat[j][m-1]=='O')
            {
                dfs(j,m-1,vis,mat, delrow, delcol);
            }
        }
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(!vis[i][j] && mat[i][j]=='O')
                {
                    mat[i][j]='X';
                }
            }
        }
        return mat;
    }
};