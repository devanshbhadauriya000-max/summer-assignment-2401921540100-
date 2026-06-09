bool isfreqsame(int freq1[] , int freq2[]){
    for(int i=0 ; i<26 ; i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }

    return true;
}
    bool checkInclusion(string s1, string s2) 
    {
        int freq[26]={0};
        for(int i=0 ; i<s1.size() ; i++)
        {
            // int index = s1[i] - 'a';
            freq[s1[i] - 'a']++;
        }

        int windowsize = s1.size();

        for(int i=0 ; i<s2.size() ; i++)
        {
            int windowindex = 0 , index = i;
            int windowfreq[26] = {0};

            while(windowindex < windowsize && index < s2.size())
            {
              windowfreq[s2[index]-'a']++;
              windowindex++ ; index++;
            }

            if(isfreqsame(freq , windowfreq))
            {
                return true;
            }
        }

        return false;
