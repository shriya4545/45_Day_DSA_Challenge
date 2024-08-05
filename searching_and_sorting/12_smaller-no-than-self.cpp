class Solution {
public:
    //modified merge sort 
    void merge(int left, int mid, int right, vector<pair<int,int>>& arr, vector<int>& ans)
    {
        vector<pair<int,int>> tmp(right-left+1);

        int i=left, j=mid+1, k=0;
        while(i<=mid && j<=right)
        {
            if(arr[i].first <= arr[j].first)
            {
                tmp[k++] = arr[j++];
            }
            else
            {
                ans[arr[i].second]+=(right-j+1);
                tmp[k++] = arr[i++];
            }
        }
        while(i<=mid)
        {
            tmp[k++] = arr[i++];
        }
        while(j<=right)
        {
            tmp[k++] = arr[j++];
        }

        for(int l=left; l<=right; l++)
        arr[l] = tmp[l-left];
    }
    void mergeSort(int left, int right, vector<pair<int,int>>& arr, vector<int>& ans)
    {
        if(left>=right)
        return;

        int mid = (left+right)/2;
        mergeSort(left, mid, arr, ans);
        mergeSort(mid+1, right, arr, ans);

        merge(left, mid, right, arr, ans);
    }
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> arr;
        for(int i=0; i<n; i++)
        {
            arr.push_back({nums[i], i});
        }
        vector<int> ans(n, 0);
        mergeSort(0, n-1, arr, ans);
        return ans;
    }
};