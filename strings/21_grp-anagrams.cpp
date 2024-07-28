class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& list) {
        //code here
        vector<vector<string>> ans;
        unordered_map<string, vector<string>> m;
        
        for(int i=0; i<list.size(); i++)
        {
            string tmp = list[i];
            sort(tmp.begin(), tmp.end());
            m[tmp].push_back(list[i]);
        }
        
        for(auto &it: m)
        {
            ans.push_back(it.second);
        }
        sort(ans.begin(), ans.end());
        return ans;
    }
};