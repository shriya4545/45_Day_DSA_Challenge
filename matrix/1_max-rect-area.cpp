class Solution{
  public:
  
    int histogram(vector<int>& height, int m)
    {
        stack<int> s;
        int ans=0;
        for(int i=0; i<=m; i++)
        {
            while(!s.empty() && (i==m || height[s.top()]>=height[i]))
            {
                int tmp = s.top();
                s.pop();
                int width;
                if(s.empty())
                width=i;
                else
                width = i-s.top()-1;
                
                ans = max(ans, width*height[tmp]);
            }
            s.push(i);
        }
        return ans;
    }
  
    int maxArea(int mat[MAX][MAX], int n, int m) {
        // Your code here
        vector<int> height(m,0);
        int ans=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(mat[i][j]==1)
                    height[j]+=1;
                else
                    height[j]=0;
            }
            ans = max(ans, histogram(height, m));
        }
        return ans;
    }
};