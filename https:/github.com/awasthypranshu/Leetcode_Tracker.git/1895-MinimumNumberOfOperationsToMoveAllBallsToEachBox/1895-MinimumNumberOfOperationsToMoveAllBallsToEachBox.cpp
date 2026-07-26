// Last updated: 26/07/2026, 22:03:43
class Solution {
public:
    int makePositive(int num) {
        if (num < 0)
            return -num;  
        return num;       
    }
    vector<int> minOperations(string boxes) {
        vector<int>index;
        for(int i=0; i<boxes.size();i++){
            if(boxes[i] == '1'){
                index.push_back(i);
            }
        }
        vector<int>res;
        for(int i=0; i<boxes.size();i++){
            int j = 0;
            int result = 0;
            while(j < index.size()){
                int num = i - index[j];
                result = result + makePositive(num);
                j++;
            }
            res.push_back(result);
        }
        return res;
    }
};