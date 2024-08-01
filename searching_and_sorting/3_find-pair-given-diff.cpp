class Solution {
  public:
    bool isPossible(long long a[], long long b[], int n, long long k) {
        // Your code goes here
        sort(a, a+n);
        sort(b, b+n);
        
        int i=0, j=n-1;
        for(int i=0; i<n; i++)
        {
            if(a[i]+b[j]<k)
            return false;
            j--;
        }
        return true;
    }
};