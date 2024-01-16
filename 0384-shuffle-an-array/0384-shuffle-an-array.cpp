class Solution {
public:
    
    vector<int>orig;
    
    vector<int>shuf;
    Solution(vector<int>& nums) {
        
        orig = nums;
        
    }
    
    vector<int> reset() {
        
        return orig;
        
    }
    
    vector<int> shuffle() {
        shuf = orig;
        
    int i=0;
    int j = shuf.size()-1;
    
        
        while(i<j) {
            int pos = rand()%(j+1);
            swap(shuf[pos],shuf[j]);
            j--;
        }
        
        return shuf;

        
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */