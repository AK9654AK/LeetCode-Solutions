class MinStack {
public:
    
    stack<int>s;
    multimap<int,bool>set;
    int mini=INT_MAX;
    MinStack(){
        
    }
    
    void push(int val) {
        s.push(val);
        set.insert(make_pair(val,true));
    }
    
    void pop() {
        int x=s.top();
        auto it =set.find(x);
        if(it!=set.end()){
        set.erase(it);
        }
        s.pop();
        
    }
    
    int top(){
        int x=s.top();
        return x;
    }
    
    int getMin() {
         int ele=set.begin()->first;
        return ele;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */