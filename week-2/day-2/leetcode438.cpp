 vector<int> pfreq(26,0);
        vector<int> sfreq(26,0);
        vector<int> ans;
        int n = p.size();

        for(int i=0 ; i<p.size() ; i++)
        pfreq[p[i]-'a']++;

        for(int i =0 ; i<s.size() ; i++)
        {
            sfreq[s[i]-'a']++;
            if(i>n-1)
            {
              sfreq[s[i-n]-'a']--;
            }
        
    
        bool anagram = true;
        for(int j=0; j<26 ; j++)
        {
            if(sfreq[j]!=pfreq[j])
            {
                anagram = false;
                break;
            }
        }

        if(anagram) ans.push_back(i-n+1);
    }

    return ans;
