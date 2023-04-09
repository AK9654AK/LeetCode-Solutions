class Solution {
public:
    int distMoney(int money, int children) {
        
        if(children>money)return -1;
        
       if(money==children*8)return children;
       if(money>children*8)return children-1;
        
        money-=children;
        
        int count=money/7;
        int rem=money%7;
        children-=count;
        
        
        if(rem==3 && children==1)count--;
        
        
        return count;
    }
};