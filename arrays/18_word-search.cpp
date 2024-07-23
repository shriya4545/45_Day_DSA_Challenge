class Solution {
public:
    //simple dfs starting from cell which has value same as starting letter of a word
    bool solve(int i, int j, vector<vector<char>>& mat,vector<vector<int>>& vis, string s, int k)
    {
        if(k==s.size())
        return true;
        if(i<0 || i>=mat.size() || j<0 || j>=mat[0].size() || vis[i][j]==1 || mat[i][j]!=s[k])
        return false;

        vis[i][j]=1;

        if(solve(i-1,j,mat,vis,s,k+1) || solve(i+1,j,mat,vis,s,k+1) || solve(i,j-1,mat,vis,s,k+1) || solve(i,j+1,mat,vis,s,k+1))
        return true;

        vis[i][j]=0;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0; i<board.size(); i++)
        {
            for(int j=0; j<board[0].size(); j++)
            {
                vector<vector<int>> vis(board.size(), vector<int>(board[0].size(), 0));
                if(board[i][j]==word[0])
                {
                    if(solve(i,j,board,vis,word,0))
                    return true;
                }
            }
        }
        return false;
    }
};