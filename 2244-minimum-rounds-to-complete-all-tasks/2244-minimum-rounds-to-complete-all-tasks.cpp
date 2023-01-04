class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
        for(int i=0;i<tasks.size();i++)
        {
            m[tasks[i]]++;
        }
        int ans=0;
        for(auto it:m)
        {
            int k = it.second;
            if(k<=1) return -1;
            
            else if(k%3==0)
            {
                ans+=k/3;
            }
            else
            {
                ans+=k/3+1;
            }
                
        }
        return ans;
        
    }
};