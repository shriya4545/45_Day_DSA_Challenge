class Solution {
public:
    string addBinary(string a, string b) {
        string ans="";
        int carry = 0;
        int n=a.size(), m=b.size(), i=n-1, j=m-1;
        while(j>=0 || i>=0)
        {
            int tmp = 0;
            if(i>=0)
            tmp+=(a[i]-'0');
            if(j>=0)
            tmp+=(b[j]-'0');
            tmp+=carry;
            if(tmp==0)
            {
                ans='0'+ans;
                carry =0;
            }
            else if(tmp==1)
            {
               ans='1'+ans;
                carry=0;
            }
            else if(tmp==2)
            {
                ans='0'+ans;
                carry=1;
            }
            else
            {
                ans='1'+ans;
                carry = 1;
            }
            i--; j--;
        }
        if(carry==1)
        ans='1'+ans;

        return ans;
    }
};