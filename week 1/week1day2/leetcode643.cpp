
        int count =0;
        for(int i=0 ; i<k; i++)
        {
        count += nums[i];
        }

        int maxsum = count;

        int startindex=0;
        int endindex=k;

        while(endindex<nums.size())
        {
            count = count - nums[startindex];
            startindex++;

            count = count + nums[endindex];
            endindex++;

            maxsum = max(maxsum , count);

          
        }

          return (double) maxsum/k;
