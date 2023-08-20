class Solution {
public:
    int hIndex(vector<int>& citations) {
        
        int l=0;
        int h = citations.size();
        
        int count;
        
        int ans =0;
        
        while(l<=h) {
            count =0;
            int mid  = l+(h-l)/2;
            
            for(int i=0;i<citations.size();i++) {
                if(citations[i]>= mid) count++;
            }
            if(count>=mid) {
                ans = mid;
                l = mid+1;
            }
            else {
                h = mid-1;
            }
        }
        return ans;
        
    }
};