class Solution 
{
    public:
    //Function to find the minimum number of swaps required to sort the array. 

    //cycle
    //swaps = cycle - 1
	int minSwaps(vector<int>&nums)
	{
	    // Code here
	    int n = nums.size();
	    vector<pair<int,int>> pos(n);
	    for(int i=0; i<n; i++)
	    {
	        pos[i] = {nums[i],i};
	    }
	    
	    sort(pos.begin(), pos.end());
	    vector<bool> vis(n, false);
	    int cnt=0;
	    for(int i=0; i<n; i++)
	    {
	        if(vis[i] || pos[i].second == i)
	            continue;
	        int cycle = 0;
	        int x = i;
	        while(!vis[x])
	        {
	            vis[x] = true;
	            x = pos[x].second;
	            cycle++;
	        }
	        if(cycle > 0)
	        {
	            cnt+=(cycle-1);
	        }
	    }
	    return cnt;
	}
};