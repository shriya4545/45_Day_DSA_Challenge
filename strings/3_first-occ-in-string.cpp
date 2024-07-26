class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m=needle.size();
        int ans=-1;
        for(int i=0; i<n; i++)
        {
            if(haystack[i]==needle[0])
            {
                int j=0, ind = i;
                while(ind<n && j<m)
                {
                    if(haystack[ind]==needle[j])
                    {
                        ind++; j++;
                    }
                    else
                    {
                        break;
                    }
                }
                if(j==m)
                {
                    ans=i;
                    break;
                }
            }
        }
        return ans;
    }
};