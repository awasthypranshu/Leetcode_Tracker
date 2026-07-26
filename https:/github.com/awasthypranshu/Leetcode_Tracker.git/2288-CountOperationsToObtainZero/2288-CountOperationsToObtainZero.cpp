// Last updated: 26/07/2026, 22:03:29
class Solution {
public:
    int countOperations(int num1, int num2) {
        int operation = 0;
        while(num1 > 0 && num2 > 0){
            if(num1 > num2){
                operation++;
                num1 = num1-num2;
            }
            else if(num2 > num1){
                operation++;
                num2 = num2-num1;
            }
            else{
                operation++;
                return operation;
            }
        }
        return operation;
    }
};