// Last updated: 26/07/2026, 22:05:08
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }
        map<char,int>mpp1;
        for(int i = 0; i < s.length(); i++){
            mpp1[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            if(mpp1.find(t[i]) != mpp1.end() && mpp1[t[i]] > 0){
                mpp1[t[i]]--;
            }else{
                return false;
            }
        }
        return true;
    }
};