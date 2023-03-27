class MyHashSet {
public:
    
    vector<bool>abhi;
    
    MyHashSet() {
        
        abhi.resize(1e6+1,false);
        
    }
    
    void add(int key) {
        
        abhi[key]=true;
    }
    
    void remove(int key) {
        
        abhi[key]=false;
    }
    
    bool contains(int key) {
        
        if(abhi[key]==true)
            return true;
        else return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */