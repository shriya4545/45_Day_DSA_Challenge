class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int n=board.size(), m=board[0].size();
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int dx[8] = {-1,0,1,0,1,-1,1,-1};
                int dy[8] = {0,-1,0,1,1,-1,-1,1};
                int cnt=0;
                for(int k=0; k<8; k++)
                {
                    int newr=dx[k]+i;
                    int newc=dy[k]+j;
                    if(newr>=0 && newr<n && newc>=0 && newc<m)
                    {
                        if(board[newr][newc]==1 || board[newr][newc]==2)
                        {
                            cnt++;
                        }
                    }
                }
                if(cnt<2)
                    {
                        if(board[i][j]==1) //2--> prev 1 now 0
                        board[i][j]=2;

                    }
                else if(cnt==3)
                {
                    if(board[i][j]==0)
                    board[i][j]=3;//--> prev 0 now 1
                }
                else if(cnt>3)
                {
                    if(board[i][j]==1) //2--> prev 1 now 0
                        board[i][j]=2;
                }
            }
        }

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(board[i][j]==2)
                board[i][j]=0;
                else if(board[i][j]==3)
                board[i][j]=1;
            }
        }
        return;
    }
};