int solve(int i, int n, int k, vector<int>& nums, vector<int> &dp)
    {
        if(i>n)
        {
            return 0;
        }
        if(dp[i]!=-1)
        return dp[i];
        int mini = INT_MAX;
        int sum=0;
        for(int ind=i; ind<=n; ind++)
        {
            sum+=nums[ind];
            if(sum<=k && ind==n)
            return dp[i] = 0;
            if(sum<=k)
            {
                int extra = (k-sum)*(k-sum);
                int cost = extra + solve(ind+1,n,k,nums, dp);
                mini = min(mini, cost);
                sum++;
            }
        }
        return dp[i] = mini;
    }
    int solveWordWrap(vector<int>nums, int k) 
    { 
        // Code here
        int n = nums.size();
        vector<int> dp(n, -1);
        return solve(0, n-1, k, nums, dp);
    } 