class Solution {
  public:
  #define ll long long
  
    ll solve(int arr[], ll pages, int n)
    {
        ll stu = 1, spages=0;
        for(int i=0; i<n; i++)
        {
            if(spages+arr[i]<=pages)
            spages+=arr[i];
            else
            {
                stu++; spages=arr[i];
            }
        }
        return stu;
    }
    // Function to find minimum number of pages.
    long long findPages(int n, int arr[], int m) {
        // code here
        int low = arr[0], high=arr[0];
        if(n < m)
            return -1;
        for(int i=1; i<n; i++)
        {
            low = max(low, arr[i]);
            high+=arr[i];
        }
        while(low<=high)
        {
            ll mid = (low+high)/2;
            ll nstu = solve(arr, mid, n);
            if(nstu>m)
            {
                low = mid+1;
            }
            else
            {
                high= mid-1;
            }
        }
        
        return low;
        
    }
};