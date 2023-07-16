class Solution {
public:
    
    bool possible(vector<int>&bloomDay,int day,int m,int k) {
        int count =0;
        int numB = 0;
        for(int i=0;i<bloomDay.size();i++)
        {
            if(bloomDay[i] <= day)
            {
                count++;
            }
            else
            {
               numB+=(count/k);
                count = 0;
            }
        }
        numB+=(count/k);
        return numB>=m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size() < (long long)((long long )m*k)) return -1;
        
      int low  = *min_element(bloomDay.begin(),bloomDay.end());
      int high =  *max_element(bloomDay.begin(),bloomDay.end());
        
        while(low<=high)
        {
            long long mid = low+(high-low)/2;
            
            if(possible(bloomDay,mid,m,k))
            {
                high  = mid-1;
            }
            else
            {
                low = mid+1;
            }
        }
        return low;
        
    }
};