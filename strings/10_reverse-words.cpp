class Solution {
public:
    void reverse(string &s, int i, int j)
    {
        while(i<j)
        {
            swap(s[i], s[j]);
            i++;
            j--;
        }
        return;
    }
    string reverseWords(string s) {
       int n=s.size();
       reverse(s, 0, n-1);
       int i=0, j=0;
       while(i<n && s[i]==' ')
       i++;
       j=i;
       string ans="";
       while(i<n && j<n)
       {
           while(j<n && s[j]!=' ')
           j++;
           reverse(s, i, j-1);
           ans+=s.substr(i, j-i);
           ans+=" ";
           while(j<n && s[j]==' ')
           j++;
           i=j;
       }
       return ans.substr(0, ans.size()-1);
    }
};