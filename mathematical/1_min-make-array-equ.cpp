class Solution {
public:
    //make equal to median of array elements
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size(), mid;
        if(n%2==0)
        {
            mid= ((nums[n/2] + nums[(n/2)-1])/2);
        }
        mid=nums[n/2];
        
        int ans=0;
        for(int i=0; i<n; i++)
        {
            ans+=abs(nums[i]-mid);
        }
        return ans;
    }
};