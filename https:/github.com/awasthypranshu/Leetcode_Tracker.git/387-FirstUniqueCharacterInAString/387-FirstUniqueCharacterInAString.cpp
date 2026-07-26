// Last updated: 26/07/2026, 22:04:55
class Solution {
public:
    int firstUniqChar(string s) {
        map<char, int> mpp;
        for(int i = 0; i < s.length(); i++){
            mpp[s[i]]++; 
        }
        for(int i = 0; i < s.length(); i++){
            if(mpp[s[i]] == 1){ 
                return i;
            }
        }
        return -1; 
    }
};
