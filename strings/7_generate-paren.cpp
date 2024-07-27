class Solution {
public:

    void solve(int n, string &tmp, vector<string>& ans, int l, int r)
    {
        if(l==n && r==n)
        {
            ans.push_back(tmp);
            return;
        }
        if(l<n)
        {
            tmp+='(';
            solve(n,tmp,ans,l+1,r);
            tmp.pop_back();
        }
        if(r<l)
        {
            tmp+=')';
            solve(n,tmp,ans,l,r+1);
            tmp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string tmp="(";
        solve(n, tmp, ans, 1, 0);
        return ans;
    }
};