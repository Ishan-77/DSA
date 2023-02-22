class Solution {
public:
    
    
    
    
    bool isPossible(int mid,vector<int>&weights,int days)
    {
        int d=1;
        int sum=0;
        for(int i=0;i<weights.size();i++)
        {
            sum+=weights[i];
            
            if(sum>mid)
            {
                d++;
                sum= weights[i];
            }
        }
        return d<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int maxCapacity = 0;
        int n  = weights.size();
        
        for(int i=0;i<n;i++)
        {
            maxCapacity +=weights[i];
        }
        int l = *max_element(weights.begin(),weights.end());
        int h = maxCapacity;
        int result;
        while(l<=h)
        {
            int mid = l+(h-l)/2;
            
            if(isPossible(mid,weights,days))
            {
                result = mid;
                h=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return result;
        
    }
};