 int left=0;
        int right = height.size()-1;
        int maxi = 0;

        while(left < right)
        {
            int area = min(height[left] , height[right])*(right-left);

            maxi = max(area,maxi);

            if(height[left] < height[right])
            left++;
            else
            right--;
        }

        return maxi;
