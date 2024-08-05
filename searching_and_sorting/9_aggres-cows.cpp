class Solution {
public:

    int solve(vector<int> &arr, int n, int mid)
    {
        int cows=1;
        int last = arr[0];
        for(int i=1; i<n; i++)
        {
            if(arr[i]-last >= mid)
            {
                last = arr[i];
                cows++;
            }
        }
        return cows;
    }
    
    int solve(int n, int k, vector<int> &stalls) {
    
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int low = 0, high = stalls[n-1]-stalls[0];
        int ans=0;
        while(low<=high)
        {
            int mid = (low+high)/2;
            if(solve(stalls, n, mid) >= k)
            {
                ans = mid;
                low = mid+1;
            }
            else
            {
                high = mid-1;
            }
        }
        return ans;
    }
};