class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>mpp;
        int ans =  -1;
        int mini = -1;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        for(auto it:mpp)
        {
            if(it.first%2==0)
            {
                
                if(it.second>mini)
                {
                    mini =  it.second;
                    ans  = it.first;
                }
            }
          
        }
          return ans;
    }
};