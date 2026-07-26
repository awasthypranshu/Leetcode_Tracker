// Last updated: 26/07/2026, 22:05:53
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i = 0; i < n; i++){
            if(target >= matrix[i][0] && target <= matrix[i][m-1]){
                int n = matrix[i].size();
                int left = 0;
                int right = n-1;
                while(left <= right){
                    int mid = (left + right)/2;
                    if(matrix[i][mid] == target) return true;
                    else if(matrix[i][mid] < target){
                        left = mid+1;
                    }else{
                        right = mid-1;
                    }
                }
            }
        }
        return false;
    }
};