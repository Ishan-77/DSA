class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        
        int ans = 0;
        for(int i=1;i<=n-2;) {
            if(arr[i]>arr[i-1] && arr[i] > arr[i+1]) {
                // count left part  then right part then add both to find length
                
                int j = i;
                
                int count = 1; // apne aap ko bhi count krna hai na!!
                
                while(j > 0 && arr[j] > arr[j-1]) {
                    j--;
                    count++;
                    
                }
                while(i<n-1 && arr[i] > arr[i+1]) {
                    i++;
                    count++;
                }
                ans =  max(ans,count);
            }
            else {
                i++;
            }
        }
        return ans;
        
    }
};