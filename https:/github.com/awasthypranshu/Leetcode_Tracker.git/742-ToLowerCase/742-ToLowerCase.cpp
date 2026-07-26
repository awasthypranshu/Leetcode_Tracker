// Last updated: 26/07/2026, 22:04:33
class Solution {
public:
    string toLowerCase(string s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                int pos = s[i] - 'A';
                s[i] = 'a' + pos;
            }
        }
        return s;
    }
};