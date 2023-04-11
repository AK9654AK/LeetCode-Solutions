class Solution {
public:
   int dayOfYear(string date) {
    int totdays[12] = {0,31,59,90,120,151,181,212,243,273,304,334};
    
       
       
    // string mon=to_string(date[6]-'0')+to_string(date[7]-'0');
    // int month=stoi(mon);
    // int days=0;
    // --month;
    // while(month--){
    //     days+=hash[month];
    // }
    // string daystotal=to_string(date[8]-'0')+to_string(date[9]-'0');
    // int day=stoi(daystotal);
    // days+=day;
    // string year="";
    // for(int i=0;i<4;i++){
    //     year+=to_string(date[i]-'0');
    // }
       
        int year=stoi(date.substr(0,4));
        int month=stoi(date.substr(5,2));
        int days=stoi(date.substr(8,2));
        int ans=0;
       
       
    // int lcheck=stoi(year);
   if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month <= 2) return totdays[month-1]+days;
if(year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2) return totdays[month-1]+days+1;
return totdays[month-1]+days;
   }
};