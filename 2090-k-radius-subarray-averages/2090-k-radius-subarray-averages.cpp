class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> v(n,-1);
        int temp= (2*k) +1;

        if(n<temp)  
        return v;

        long long int j=0, sum=0, avg=0;
        for(int i=0; i< n; i++)
        {
            sum = sum + nums[i];
            if(i-j+1==temp)
            {
                avg= sum/temp;
                // v.push_back(avg);
                v[i-k]= avg;
                sum= sum- nums[j];
                j++;
            }
        }
        return v;
    }
};