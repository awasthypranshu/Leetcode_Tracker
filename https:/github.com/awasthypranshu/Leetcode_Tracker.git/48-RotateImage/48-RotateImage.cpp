// Last updated: 26/07/2026, 22:06:00
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();
        vector<vector<int>> arr(m, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                arr[j][n-i-1] = matrix[i][j];
            }
        }
        matrix = arr;
    }
};