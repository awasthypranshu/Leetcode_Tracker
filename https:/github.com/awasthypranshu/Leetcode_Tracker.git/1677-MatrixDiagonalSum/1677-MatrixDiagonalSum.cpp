// Last updated: 26/07/2026, 22:03:57
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int pd = 0;
        int c1 = 0;
        int c2 = m-1;
        int sd = 0;
        int sum = 0;
        while(pd <= n-1 && sd <= n-1){
            if(pd == sd && c1 == c2){
                sum = sum + mat[pd][c1];
                pd++;
                c1++;
                sd++;
                c2--;
                continue;
            }
            sum = sum + mat[pd][c1] + mat[sd][c2];
            pd++;
                c1++;
                sd++;
                c2--;
        }
        return sum;
    }
};