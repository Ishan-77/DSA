class Solution {
public:
    void merge(vector<int>&nums,int low,int mid,int high)
    {
        vector<int> temp;
        int l  = low;
        int h = mid+1;
        
        while(l<=mid && h<=high)
        {
            if(nums[l]<=nums[h])
            {
                temp.push_back(nums[l]);
                l++;
            }
            else
            {
                temp.push_back(nums[h]);
                    h++;
            }
        }
        while(l<=mid)
        {
            temp.push_back(nums[l]);
                l++;
        }
        while(h<=high)
        {
            temp.push_back(nums[h]);
                h++;
        }
        for(int i =low;i<=high;i++)
        {
            nums[i] =  temp[i-low];
        }
    }
    
    
    
    void mergesort(vector<int>&nums,int low,int high)
    {
        if(low>=high) return;
        
        int mid = (low+high)/2 ;
        mergesort(nums,low,mid);
        mergesort(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};