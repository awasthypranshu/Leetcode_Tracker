// Last updated: 26/07/2026, 22:04:30
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size() != goal.size()) return false;
        for(int i = 0; i < goal.size(); i++){
            int j = 0; 
            int k = i;
            while(j < s.size()){
                if(goal[k] == s[j]){
                    j++;
                    k++;
                }
                else{
                    break;
                }
                if(j == (s.size())){
                    return true;
                }
                if(k == s.size()){
                    k = 0;
                }
            }
        }
        return false;
    }
};