class Solution {
public:
    //store modulus in map
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> m;
       
        m[0]=1;
        int sum=0, rem=0, ans=0;
        int n=nums.size();
        for(int i=0; i<n; i++)
        {
            sum+=nums[i];
            rem=sum%k;
            if(rem<0)
                rem+=k; //to store positive modulo value
            auto it=m.find(rem);
            if(it!=m.end())
            {
                ans+=it->second;
                m[rem]++;
            }
            else
                m[rem]=1;
        }
        return ans;
    }
};