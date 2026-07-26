// Last updated: 26/07/2026, 22:03:56
class Solution {
public:
    int maxDepth(string s) {
        int in = 0;
        int max  = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                in++;
            }
            else if(s[i] == ')'){
                in--;
            }
            if(in > max){
                max = in;
            }
        }
        return max;
    }
};