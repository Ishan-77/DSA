class NumberContainers {
public:
    
    
    unordered_map<int,int>mpp; // index->number
    
    unordered_map<int,set<int>>mpp2; // number-> set of indices
    NumberContainers() {
        
    }
    
    void change(int index, int number) {
        if(mpp.find(index)==mpp.end()) {
            mpp2[number].insert(index);
            mpp[index] = number;
        }
        
        
        else  {   // already present 
          mpp2[mpp[index]].erase(index);
            
            mpp2[number].insert(index);
          mpp[index] = number;
               
            
        }
        
    }
    
    int find(int number) {
        if(mpp2.find(number)==mpp2.end() || mpp2[number].size()==0) return -1;
        return *(mpp2[number].begin());
        
    }
};

/**
 * Your NumberContainers object will be instantiated and called as such:
 * NumberContainers* obj = new NumberContainers();
 * obj->change(index,number);
 * int param_2 = obj->find(number);
 */