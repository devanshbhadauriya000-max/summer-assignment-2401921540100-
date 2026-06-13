 int n = s.size();
               int maxlen =1;
               int start = 0;

            //    for odd length

            for(int i=0 ; i<n-1 ; i++){
                int l = i , r = i;
                while(l>=0 && r<n)
                {
                    if(s[l] == s[r])
                    {
                        l--;
                        r++;
                    }
                    else
                    break;
                }
                int current = r - (l+1);
                if(current > maxlen)
                {
                    maxlen = current;
                    start = l + 1;
                }
            }

            // for even

                  for(int i=0 ; i<n-1 ; i++){
                int l = i , r = i+1;
                while(l>=0 && r<n)
                {
                    if(s[l] == s[r])
                    {
                        l--;
                        r++;
                    }
                    else
                    break;
                }
                int current = r - (l+1);
                if(current > maxlen)
                {
                    maxlen = current;
                    start = l + 1;
            }
                  }



            return s.substr(start , maxlen);
            
