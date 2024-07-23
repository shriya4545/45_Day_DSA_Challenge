class Solution {
  public:
    void solve(int i, vector<int>& arr, set<vector<int>>& s, int n)
    {
        if(i==n)
        {
            s.insert(arr);
        }
        for(int j=i; j<n; j++)
        {
            swap(arr[i], arr[j]);
            solve(i+1, arr, s, n);
            swap(arr[i], arr[j]);
        }
        return;
    }
    vector<vector<int>> uniquePerms(vector<int> &arr ,int n) {
        // code here
        set<vector<int>> s;
        vector<vector<int>> ans;
        solve(0, arr, s, n);
        for(auto &it: s)
        {
            ans.push_back(it);
        }
        return ans;
    }
};