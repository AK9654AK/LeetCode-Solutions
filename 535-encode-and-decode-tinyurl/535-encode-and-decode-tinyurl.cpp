class Solution {
public:

    string deco(string abhi){
        string store=abhi;
        return store;
        
    }
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
 
        string res=deco(longUrl);
        return res;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string res2=deco(shortUrl);
        return res2;
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));