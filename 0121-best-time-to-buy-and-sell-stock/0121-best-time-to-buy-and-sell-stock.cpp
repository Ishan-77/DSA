class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = prices[0];
        int msum=INT_MIN;
        for(int i=0;i<prices.size();i++)
        {
            price = min(price,prices[i]);
            msum = max(msum,prices[i]-price);
        }
        return msum;
    }
};