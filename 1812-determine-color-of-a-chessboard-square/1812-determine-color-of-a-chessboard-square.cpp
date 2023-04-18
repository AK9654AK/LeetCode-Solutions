class Solution {
public:
    bool squareIsWhite(string coordinates) {
        
// if((coordinates[0]=='a'||coordinates[0]=='c'||coordinates[0]=='e'||coordinates[0]=='g') && (coordinates[1]==1||coordinates[1]==3||coordinates[1]==5||coordinates[1]==7)) return false;
        

        
        int temp1 = coordinates[0]-'a';
        int temp2 = coordinates[1]-'0';
        if(temp1%2==0 && temp2%2!=0){
            return false;
        }
        else if(temp1%2!=0 && temp2%2==0){
            return false;
        }

        return true;
    }
};