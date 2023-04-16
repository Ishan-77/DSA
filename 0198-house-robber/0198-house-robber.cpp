class Solution {
public:
    
    int maxmoney(int currenthouse,vector<int>&nums,unordered_map<int,int>&store)
    {
        if(currenthouse>= nums.size()) return 0;
        
        
        int key =  currenthouse;
            
            if(store.find(key)!=store.end())
            {
                return store[key];
            }
        
        int rob = nums[currenthouse] + maxmoney(currenthouse+2,nums,store);
        int norob = 0 + maxmoney(currenthouse+1,nums,store);
        
        store[key] = max(rob,norob);
        
        return store[key];
    }
    
    int rob(vector<int>& nums) {
        unordered_map<int,int>store;
        return maxmoney(0,nums,store);
    }
};