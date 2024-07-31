class Solution {
public:
    string convertToTitle(int n) {
        if(n<27)
        {
            return string(1, 'A'+(n-1)%26);
        }
        
        string ans="";
        while(n>0)
        {
            if(n%26==0)
            {
                ans+='Z';
                n-=1;
            }
            else
            {
                ans+= 'A'+ n%26 -1;
            }
            n=n/26;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
    
};