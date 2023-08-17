class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>smaller,equal,greater,ans;
        
        for(int i=0;i<nums.size();i++) {
            if(nums[i] < pivot){
                smaller.push_back(nums[i]);
            }
            else if(nums[i] == pivot) {
                equal.push_back(nums[i]);
            }
            else {
                greater.push_back(nums[i]);
            }
        }
        for(int i=0;i<smaller.size();i++) {
            ans.push_back(smaller[i]);
        }
        for(int i=0;i<equal.size();i++) {
            ans.push_back(equal[i]);
        }
        for(int i=0;i<greater.size();i++) {
            ans.push_back(greater[i]);
        }
        return ans;
    }
};