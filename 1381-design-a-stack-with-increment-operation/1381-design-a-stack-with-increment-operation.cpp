class CustomStack {
public:
    int top;
    vector<int>v;
    int maxi;
    CustomStack(int maxSize) {
        maxi=maxSize;
        v.resize(maxi);
        top=-1;
    }
    
    void push(int x) {
        
        if(top<maxi-1){top++;v[top]=x;}
    }
    
    int pop() {
        int del;
        if(top==-1)return -1;
       // if(v.size()!=0){
           del=v[top];
           top--;
       // }
        return del;
    }
    
    void increment(int k, int val) {
        
        int i=0;
        while(i<k&& i<=top){
            v[i]+=val;
            i++;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */