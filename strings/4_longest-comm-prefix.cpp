class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i=0, j=0;
        int n=strs.size();
        string ans="";
        char c;
        while(1)
        {
            if(j<strs[0].size())
             c=strs[0][j];
            else
            break;
            for(int i=1; i<n; i++)
            {
                if(strs[i].empty()) return "";
                if(j<strs[i].size())
                {
                    if(c!=strs[i][j])
                    return ans;
                }
                else
                return ans;
            }
            j++;
            ans.push_back(c);
        }
        return ans;
    }
};