//simple 2 pointer technique
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0, i=1, n=nums.size();
    for(int j=0; j<n-1; j++)
    {
        if(nums[j]!=nums[j+1])
        {
            nums[i++]=nums[j+1];
        }
    }
    return i;
    }
};