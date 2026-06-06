sort(strs.begin(),strs.end());

       string ans="";
       string str1=strs[0];
       string str2=strs[strs.size()-1];

       for(int i=0;i<str1.size();i++)
       {
        if(str1[i]!=str2[i])
        break;

        else
        ans+=str1[i];
        
       }
       return ans;
        