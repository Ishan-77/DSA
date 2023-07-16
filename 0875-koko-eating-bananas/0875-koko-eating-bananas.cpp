class Solution {
public:
    
    long long  perHourEating(vector<int>&piles,int h)
    {
        double  sum=0;
        for(int i=0;i<piles.size();i++)
        {
           sum+=ceil(piles[i]/(double)h); 
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int ans = 0;
        
        int l =1;
        int high = *max_element(piles.begin(),piles.end());
        
        while(l<=high)
        {
            int mid = l+(high-l)/2;
            
            long long  sum = perHourEating(piles,mid);
            
            if(sum<=h)
            {
                ans = mid;
                high = mid-1;
            }
            else
            {
                l = mid+1;
            }
            
            
        }
        return ans;
        
    }
};