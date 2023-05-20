class Solution {
public:
    int minMaxDifference(int num) {
       string no=to_string(num);
       char digit;
       char mdigit=no[0];
       for(int i=0; i<no.size(); i++)
        {
            if(no[i]!='9'){
                digit=no[i];
                break;
            }

        }
        string copy=no;
        for(int i=0; i<no.size(); i++){
            if(no[i]==digit)
            no[i]='9';
            if(copy[i]==mdigit)
            copy[i]='0';
        }
        int max=stoi(no);
        int min=stoi(copy);
        return max-min;
    }
};