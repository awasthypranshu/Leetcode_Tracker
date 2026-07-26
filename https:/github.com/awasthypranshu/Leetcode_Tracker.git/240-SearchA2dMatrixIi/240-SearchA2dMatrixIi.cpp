// Last updated: 26/07/2026, 22:05:10

        class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = matrix.size()-1;
        while(i >= 0){
            if(matrix[i][0] <= target && target <= matrix[i][matrix[0].size()-1]){
                int left = 0;
                int right = matrix[i].size() - 1;;
                while(left <= right){
                    int mid = (left + right)/2;
                    if(matrix[i][mid] == target) return true;
                    if(target < matrix[i][mid]) right = mid-1;
                    if(target > matrix[i][mid]) left = mid+1;
                }
            }
            i--;
        }
        return false;
    }
};
    