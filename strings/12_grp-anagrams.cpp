class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;
        for(int i=0; i<strs.size(); i++)
        {
            string tmp=strs[i];
            sort(strs[i].begin(), strs[i].end());
            m[strs[i]].push_back(tmp);
        }
        vector<vector<string>> ans;
        for(auto it: m)
        {
            vector<string> tmp;
            for(auto i: it.second)
            {
                tmp.push_back(i);
            }
            ans.push_back(tmp);
        }
        return ans;
    }
};