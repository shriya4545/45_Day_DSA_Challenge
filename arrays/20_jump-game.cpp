class Solution {
public:
//store maxjump possible in variable. 
    #define ll long long 
    bool canJump(vector<int>& nums) {
        ll maxjump=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            if(maxjump>=n-1)
            return true;

            if(maxjump==i && nums[i]==0)
            return false;
            if(maxjump<nums[i]+i)
            maxjump=nums[i]+i;
            
        }
        return false;
    }
};