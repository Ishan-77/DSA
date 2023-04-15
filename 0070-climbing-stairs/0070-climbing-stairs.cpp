class Solution {
public:
    
    
    int TotalWays(int currentstep, int targetstep ,unordered_map<int,int> &mpp)
    {
        if(currentstep == targetstep) return 1;

        if(currentstep > targetstep) return 0;
        
        
        int currentkey = currentstep;
        
        if(mpp.find(currentkey)!=mpp.end())
        {
            return mpp[currentkey];
        }
        int s1 = TotalWays(currentstep+1,targetstep,mpp);
        int s2 =  TotalWays(currentstep+2,targetstep,mpp);
        
        mpp[currentkey] = s1+s2;
        
        return s1+s2;
    }
    
    
    
    
    int climbStairs(int n) {
        unordered_map<int,int>mpp;
        return TotalWays(0,n,mpp);
    }
};