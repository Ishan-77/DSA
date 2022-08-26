class Solution {
public:
    int mySqrt(int x) {
        long l=1;
        long h=x;
        long ans=0;
        while(l<=h)
        {
            long mid  = l+(h-l)/2;
            if(mid*mid==x)
            {
                return mid;
            }
            else if((mid*mid)>x)
            {
                h=mid-1;
            }
            else
            {
                ans=mid;
                l=mid+1;
                
            }
        }
        return ans;
    }
};