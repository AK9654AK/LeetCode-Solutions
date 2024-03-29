class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int r=image.size();
        int c=image[0].size();
        
        
//                    for(int i=0;i<r;i++){
//             for(auto j=0;j<c;j++){
//                 image[i][j]=1-image[i][j];
//             }
//         }              ///Either use this method or use aux space method to traverse from back;
        
        
//     for(int i=0;i<r;i++){
//             reverse(image[i].begin(),image[i].end());
//         }
      
//         return image;
        
     for(int st = 0; st < r; st++) {
        int left = 0;
        int right = c-1;
        while(left < right) {
            int temp = image[st][left];
            image[st][left] = image[st][right];
            image[st][right] = temp;
            left++;
            right--;
        }
    }

        
    
    for(int i = 0; i < r; i++) {
        for(int j=0;j<c;j++) {
            image[i][j]=1-image[i][j];
        }
    }

    return image;

    }
};