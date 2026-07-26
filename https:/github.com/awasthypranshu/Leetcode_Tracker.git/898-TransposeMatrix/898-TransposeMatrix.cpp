// Last updated: 26/07/2026, 22:04:27
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<vector<int>> matrix2(m, vector<int>(n));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                matrix2[j][i] = matrix[i][j];
            }
        }
        return matrix2;
    }
};