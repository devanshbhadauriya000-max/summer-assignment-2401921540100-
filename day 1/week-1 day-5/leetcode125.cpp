 int left = 0;
        int end = s.size()-1;

        while(left < end)
        {
            if(!isalnum(s[left]))
            {
                left++;            
            }
            else if(!isalnum(s[end]))
            {
                end--;            
            }

            else if(tolower(s[left])!=tolower(s[end]))
            {
                return false;
            }
            else{
            left++;
            end--;
        }
        }

        return true;
        
        