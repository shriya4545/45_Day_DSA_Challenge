class Solution{
  public:
    // nums: given vector
    // return the Product vector P that hold product except self at each index
    #define ll long long
    vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {
       
        //handle cases of single zero and multiple zeros  
        ll tot = 1, zeros=0, ind;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            tot*=nums[i];
            else
            {zeros++;
             if(zeros>1)
             break;
             ind=i;
            }
        }
        if(zeros>1)
        {
            vector<ll> ans(n, 0);
            return ans;
        }
        else if(zeros==1)
        {
            vector<ll> ans(n, 0);
            ans[ind]=tot;
            return ans;
        }
        vector<ll> ans;
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]!=0)
            ans.push_back(tot/nums[i]);
        }
        return ans;
    }
};