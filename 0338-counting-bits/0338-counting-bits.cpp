class Solution {
public:
    
    int countbits(int n)
    {
        int count=0;
        while(n!=0)
        {
            int rsb=n&-n;
            n-=rsb;
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++)
        {
            ans.push_back(countbits(i));
        }
        return ans;
    }
};