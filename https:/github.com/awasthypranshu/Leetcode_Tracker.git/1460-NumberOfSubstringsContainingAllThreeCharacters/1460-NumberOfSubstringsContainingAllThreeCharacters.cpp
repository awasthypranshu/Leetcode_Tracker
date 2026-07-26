// Last updated: 26/07/2026, 22:04:09
class Solution {
public:
    int numberOfSubstrings(string s) {
        int count = 0;
        int a = -1,b = -1,c = -1;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'a') a = i;
            else if(s[i] == 'b') b = i;
            else c = i;

            if(a != -1 && b != -1 && c != -1){
                int earliest = min({a,b,c});
                count = count + earliest + 1;
            }
        }
        return count;
    }
};