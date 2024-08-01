class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ans;
        int n = words.size();
        int i = 0;
        
        while (i < n) {
            int curr = words[i].size();
            int j = i + 1;
            while (j < n && curr + words[j].size() + (j - i) <= maxWidth) {
                curr += words[j].size();
                j++;
            }
            
            int spaceCount = j - i - 1;
            string tmp = words[i];
            
            if (j == n || spaceCount == 0) {
                for (int k = i + 1; k < j; k++) {
                    tmp += " " + words[k];
                }
                tmp += string(maxWidth - tmp.size(), ' ');
            } else {
                int spacePerWord = (maxWidth - curr) / spaceCount;
                int extraSpaces = (maxWidth - curr) % spaceCount;
                
                for (int k = i + 1; k < j; k++) {
                    tmp += string(spacePerWord + (k - i <= extraSpaces), ' ') + words[k];
                }
            }
            
            ans.push_back(tmp);
            i = j;
        }
        
        return ans;
    }
};
