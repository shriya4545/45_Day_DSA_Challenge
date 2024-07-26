class Solution {
public:
    bool isValid(string s) {
        int i=0;
        char a;
        stack<char> m;
        for(i=0; i<s.size();i++)
        {
            if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                m.push(s[i]);
            else
            {
                if(m.empty())
                    return false;
                a=m.top();
                m.pop();
                switch(s[i])
                {
                    case ')': if(a!='(')
                                    return false;
                               break;
                    case '}': if(a!='{')
                                    return false;
                               break;
                    case ']': if(a!='[')
                                    return false;
                               break;

                }
            }
        }
        if(!m.empty())
            return false;
        return true;
    }
};