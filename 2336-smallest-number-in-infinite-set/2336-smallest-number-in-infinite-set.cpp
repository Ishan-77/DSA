class SmallestInfiniteSet {
public:
    set<int> s;
       int curr;
    SmallestInfiniteSet() {
        curr = 1;
     
        
    }
    
    int popSmallest() {
        if(s.size()) 
        {
            int ans =  *s.begin();
            s.erase(ans);
            return ans;
        }
        else
        {
            int ans = curr;
            curr++;
            return ans;
        }
        
    }
    
    void addBack(int num) {
       if(curr>num) 
        s.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */