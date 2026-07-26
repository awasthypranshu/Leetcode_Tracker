// Last updated: 26/07/2026, 22:03:50
class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int k = 0, j = 1;
        for(int i = 0; i < n; i++){
            total = total + j + k;
            j++;
            if(j > 7){
                k++;
                j = 1;
            }
        }
        return total;
    }
};