class Solution{
    public:
    //sorting and two pointer
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
        sort(a.begin(), a.end());
        long long diff=a[m-1]-a[0];
        
        for(int i=1; i<=n-m ; i++)
        {
            diff=min(a[m-1+i]-a[i], diff);
        }
        return diff;
    }   
};