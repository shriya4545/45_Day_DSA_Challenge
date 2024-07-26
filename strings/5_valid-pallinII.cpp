class Solution {
public:
    bool ispall(string& s, int st, int en)
    {
        
        while(st<en)
        {
            if(s[st]!=s[en])
            return false;
            st++; en--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int n=s.size();
        int i=0, j=n-1;
        while(i<=j)
        {
            if(s[i]!=s[j])
            {
                return ispall(s, i, j-1) || ispall(s,i+1, j);
            }
            else
            {
                i++;
                j--;
            }
        }
        return true;
    }
};