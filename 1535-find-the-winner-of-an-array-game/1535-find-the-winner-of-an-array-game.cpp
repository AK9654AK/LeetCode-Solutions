class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
    // int orik = k;
    // if (k >= arr.size()) return *max_element(arr.begin(), arr.end());
    // int size = arr.size();
    // while (size > 1 && k > 0) {
    //     int check1 = arr[0];
    //     if (arr[0] < arr[1]) {
    //         int temp = arr[0];
    //         arr.erase(arr.begin());
    //         arr.push_back(temp);
    //     } else if (arr[1] < arr[0]) {
    //         int temp = arr[1];
    //         arr.erase(arr.begin() + 1);
    //         arr.push_back(temp);
    //     }
    //     int check2 = arr[0];
    //     if (check1 != check2) {  
    //         k--;
    //     } else {
    //         k = orik;
    //     }
    //     size--;
    // }
    // return arr[0];
        
        int res = arr[0];
        int size = arr.size();
        if (k>=size)return *max_element(arr.begin(), arr.end());
        int orik = k;
        int i=1;
        int wins=0;

        while(i<size && wins < k) {
        if(arr[i]>res){
            res=arr[i];
            wins= 1;
        }else wins++;
        i++;
        }
    return res;
}
};