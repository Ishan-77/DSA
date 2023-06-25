class Solution {
public:
    int trap(vector<int>& height) {
        int ans=0;
      int n = height.size();
      int leftbar  =  height[0];
      int rightbar =  height[n-1];
        int left = 0;
        int right =  n-1;
        
        while(left<=right)
        {
            // find limiting
            if(leftbar<=rightbar)
            {
                if(height[left]>leftbar)
                {
                  leftbar = height[left];  
                }
                else{
                    ans+=leftbar-height[left];
                     left++;
                }
                
                
            }
            else
            {
                if(height[right]>rightbar)
                {
                    rightbar  =  height[right];
                }
                else
                {
                    ans+=rightbar-height[right];
                    right--;
                }
            }
            
        }
        return ans;
    }
};