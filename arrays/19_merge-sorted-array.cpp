class Solution {
public:
    //stat from end, take greater ele from backside.
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int len= nums1.size();
        int end = len-1;
        while(end>=0 && m>=1 && n>=1)
        {
            if(nums1[m-1]>nums2[n-1])
            {
                nums1[end] = nums1[m-1];
                m--;
            }
            else
            {
                nums1[end] = nums2[n-1];
                n--;
            }
            end--;
        }
        while(n>=1)
        {
            nums1[end]=nums2[n-1];
            n--; end--;
        }
        return ;
    }
};