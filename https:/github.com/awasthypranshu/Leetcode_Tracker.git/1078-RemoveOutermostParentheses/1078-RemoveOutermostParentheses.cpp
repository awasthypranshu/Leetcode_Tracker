// Last updated: 26/07/2026, 22:04:16
class Solution {
public:
    string removeOuterParentheses(string s) {
        int res = 0;
        string d = "";
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '('){
                res++;
            }
            else{
                res--;
            }
            if(res > 1){
                d.push_back(s[i]);
            }
            else if(res >= 1 && s[i] == ')'){
                d.push_back(s[i]);
            }
        }
        return d;
    }
};