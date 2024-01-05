class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        
        int rem_fuel = 0;
        int ans = 0;
        
        if(accumulate(gas.begin(),gas.end(),0) < accumulate(cost.begin(),cost.end(),0)) return -1;
        
        for(int i=0;i<gas.size();i++) {
            
            rem_fuel+=gas[i]-cost[i];
            
            if(rem_fuel < 0) {
                ans = i+1;
                rem_fuel = 0;
            }
            
        }
        return ans;
        
    }
};