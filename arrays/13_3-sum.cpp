class Solution {
public:
    // sort. and then--> fix one element and then iterate on rem for 2 using 2 ptr
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n=nums.size();
        vector<vector<int>> ans;
        for(int i=0; i<n-2; i++ )
        {
            if(i!=0 && nums[i]==nums[i-1])
            continue;
            int j=i+1, k=n-1;
            while(j<k)
            {
                if((nums[i])*-1==nums[j]+nums[k])
                {
                    ans.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while(j<n && nums[j]==nums[j-1])
                    j++;
                    k--;
                    while(k+1<n && k>=0 && nums[k]==nums[k+1])
                    k--;

                }
                else if((nums[i])*-1>nums[j]+nums[k])
                j++;
                else
                k--;
            }

        }
        return ans;
    }
};