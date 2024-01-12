class RandomizedSet {
public:
    
    vector<int>v;
    unordered_map<int,int>mpp;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(mpp.find(val)!=mpp.end()) return false; // already present 
        
        // not present 
        v.push_back(val);
        mpp[val] = v.size()-1;
        
        return true;
        
    }
    
    bool remove(int val) {
        if(mpp.find(val)==mpp.end()) return false; // not present 
        
        
        // present 
        
        int idx = mpp[val];
        int lastEl = v.back();
        v.back() = val;
        v[idx] = lastEl;
        
        
        
        mpp[lastEl] = idx;
        
        v.pop_back();
        mpp.erase(val);
        
        return true;
    }
    
    int getRandom() {
        
        int n = v.size();
        int ridx = rand()%n;
        return v[ridx];
        
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */