class OrderedStream {
public:
    
    vector<string> hash;
    int ptr=0;
    OrderedStream(int n) {
        hash.resize(n);
        ptr=0;
    }
    
    vector<string> insert(int idKey, string value) {
        
        vector<string>result;
        // for(int i=0;i<hash.size();i++)
        hash[idKey-1]=value;
        if(idKey==ptr+1){ 
            while (ptr<hash.size()&&!hash[ptr].empty()){
                result.push_back(hash[ptr]);
                ptr++;
            }
        }
        return result;
        
    }
};

/**
 * Your OrderedStream object will be instantiated and called as such:
 * OrderedStream* obj = new OrderedStream(n);
 * vector<string> param_1 = obj->insert(idKey,value);
 */