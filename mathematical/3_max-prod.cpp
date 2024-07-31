class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        int maxi;
        maxi = nums[0]*nums[1]*nums[n-1]; //to handle negative numbers case
        maxi = max(maxi, nums[n-1]*nums[n-2]*nums[n-3]);
        return maxi;
    }
};