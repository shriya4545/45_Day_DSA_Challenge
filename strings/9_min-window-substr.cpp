string smallestWindow (string s, string t)
    {
        int cnt=0, minlen=INT_MAX, minind=0;
        int l=0, r=0;
        int n=s.size(), m=t.size();
        vector<int> freq(256, 0);
        for(auto it: t)
        freq[it-'a']++;
        while(r<n)
        {
            if(freq[s[r]-'a']>0)
            cnt++;
            freq[s[r]-'a']--;
            while(cnt==m)
            {
                if((r-l+1)<minlen)
                {
                    minlen = r-l+1;
                    minind = l;
                }
                freq[s[l]-'a']++;
                if(freq[s[l]-'a']>0)
                cnt--;
                l++;
            }
            r++;
        }
        if(minlen == INT_MAX)
        return "-1";
        return s.substr(minind, minlen);
    }