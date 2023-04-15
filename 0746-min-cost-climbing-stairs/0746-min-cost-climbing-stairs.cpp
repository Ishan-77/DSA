class Solution {
public:
    
    int minCost(int currentindex,vector<int>&cost,unordered_map<int,int>&mp)
    {
       if(currentindex == cost.size()) return 0;
        
        if(currentindex >  cost.size()) return 10000; // large value will serve as infinity //
        
        
        
        int key = currentindex;
        
        if(mp.find(key)!=mp.end()) return mp[key];
        
        int onestep  = cost[currentindex] + minCost(currentindex+1,cost,mp);
        
        int twostep = cost[currentindex] + minCost(currentindex+2,cost,mp);
        
        mp[key] = min(onestep,twostep);
        
        return mp[key];
        
        
        
        return min(onestep,twostep);  
    }
    
    
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int>mp;
        return min(minCost(0,cost,mp),minCost(1,cost,mp));
    }
};