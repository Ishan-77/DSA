class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      unordered_map<int,int>mpp;
        int i,j;
        int ans = 0;
        for(i=0,j=0;j<fruits.size();j++)
        {
            mpp[fruits[j]]++;
            
            if(mpp.size()<=2)
            {
                ans= max(ans,j-i+1);
            }
            else
            {
                mpp[fruits[i]]--;
                if(mpp[fruits[i]]==0)  mpp.erase(fruits[i]);

                i++;
                
                
            }
        }
        return ans;
    }
};