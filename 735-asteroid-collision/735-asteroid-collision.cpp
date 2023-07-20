class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<bool> isActive(n,true);

        for(int i=0;i<n;i++){
            if(asteroids[i]<0){
                for(int j=i-1;j>=0;j--){
                    if(isActive[j] && asteroids[j]>0){
                        if(asteroids[j]>abs(asteroids[i])){
                            isActive[i] = false;
                            break;
                        }else if(asteroids[j]==abs(asteroids[i])){
                            isActive[j] = false;
                            isActive[i] = false;
                            break;
                        }else if(asteroids[j]<abs(asteroids[i])){
                            isActive[j] = false;
                        }
                    }
                }
            }
        }

        vector<int> res;
        for(int i=0;i<n;i++){
            if(isActive[i]){
                res.push_back(asteroids[i]);
            }
        }

        return res;
    }
};