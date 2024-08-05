class Solution {
public:
// Binary Search
    #define ll long long
    bool solve(vector<int>& nums, int k, int maxi)
    {
        ll tmp = 0;
        ll cnt = 1;
        for(int i=0; i<nums.size(); i++)
        {
            tmp+=nums[i];
            if(tmp>maxi)
            {
                cnt++;
                tmp = nums[i];
            }
        }
        if(cnt<=k)
        return true;
        else
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int maxi = INT_MIN;
        ll sum = 0;
        for(auto it: nums)
        {
            maxi = max(maxi, it);
            sum+=it;
        }
        ll low = maxi, high = sum;
        while(low<=high)
        {
            ll mid = (low+high)/2;
            if(solve(nums, k, mid)==true)
            {
               high = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
    }
};