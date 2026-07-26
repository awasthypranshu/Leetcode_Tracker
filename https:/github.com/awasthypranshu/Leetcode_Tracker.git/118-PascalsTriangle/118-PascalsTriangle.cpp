// Last updated: 26/07/2026, 22:05:45
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        int n = numRows;
        vector<vector<int>> a(n);
        for(int i = 0; i < n; i++){
            a[i].resize(i + 1);
            for(int j = 0; j <= i; j++){
                if(j==0){
                    a[i][j] = 1;
                }
                else if(j==i){
                    a[i][j] = 1;
                }
                else{
                    a[i][j] = a[i  - 1][j - 1] + a[i - 1][j];
                }
            }
        }
        return a;
    }
};