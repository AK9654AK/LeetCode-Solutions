class Solution {
public:
   vector<int> minOperations(string boxes) {
//    vector <int> ans(boxes.length());
//         // int j=0;
//         for(int k=0;k<boxes.size();k++){
//             int i=k;int j=k;
//             int count=0;
         
//             while(j>= 0){
//                 if(boxes[j] == '1')count+=abs(j-k);j--;
//             }
//           i=k;
//             while(i<boxes.length()){
//                 if(boxes[i]=='1')count+=abs(i-k);i++;
//             }
//             ans[k]=count;
//         }
//         return ans;
// }

int size = boxes.size();
    vector<int> arr(size, 0);
    for(int i=0; i<size; i++) {
        if(boxes[i]=='1') {
            for(int j=0;j<size;j++) {
                arr[j]+=abs(i-j);
            }
        }
    }
    return arr;}
};