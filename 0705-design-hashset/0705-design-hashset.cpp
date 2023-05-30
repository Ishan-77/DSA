class MyHashSet {
public:
    vector<bool>ans;
    MyHashSet() {
    //vector<bool>ans(1e6,false);
      ans.resize(1e6+1,false);
    }
    
    void add(int key) {
      ans[key] = true;  
    }
    
    void remove(int key) {
       ans[key] = false; 
    }
    
    bool contains(int key) {
       return  ans[key];
    }
};

