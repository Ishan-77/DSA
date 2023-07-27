class Solution {
public:
    
    bool isPossible(int n,vector<int>&batteries,long long  time) {
        long long tot_time = 0;
        for(auto el :batteries) {
            if(el < time) tot_time+=el;
            else tot_time+=time;
        }
        return tot_time>=n*time;
    } 
    long long maxRunTime(int n, vector<int>& batteries) {
        long long start = 1;
        long long sum = 0;
        long long ans;
        for(int ele:batteries) {
            sum+=ele;
        }
        long long end = sum; // as at max we will be able to run 1 computer by adding all battery powers
        
        while(start<=end) {
            long long mid =  start+(end -  start)/2;
            
            if(isPossible(n,batteries,mid)) {
                ans = mid;
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
        return ans;
        
    }
};