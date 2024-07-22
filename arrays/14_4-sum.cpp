class Solution {
public:
    // sort. and then--> fix two element and then iterate on rem for 2 using 2 ptr
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        for(int i=0; i<n-3; i++)
        {
            if(i!=0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1; j<n-2; j++)
            {
                if(j!=1 && i!=j-1 && nums[j]==nums[j-1])
                continue;
                int k=j+1, l=n-1;
                long long fixed=nums[i]+nums[j];
                long long req=target-fixed;
                while(k<l)
                {
                    if(nums[k]+nums[l]==req)
                    {
                        ans.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++; l--;
                        while(k<n && nums[k]==nums[k-1])
                        k++;
                        while(l>=0 && l<n && nums[l]==nums[l+1])
                        l--;
                    }
                    else if(nums[k]+nums[l]>req)
                    l--;
                    else
                    k++;
                }
            }
        }
        return ans;
    }
};