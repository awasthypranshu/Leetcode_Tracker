// Last updated: 26/07/2026, 22:06:28
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        map<char,int>mpp;
        int maxi = 0;
        int size = 0;
        while(r < s.length()){
            if(mpp.find(s[r]) == mpp.end()){
                mpp[s[r]]++;
                size = r - l + 1;
                if(size > maxi){
                    maxi = size;
                }
                r++;
            }
            else{
                while(s[l] != s[r] && l < r){
                    mpp.erase(s[l]);
                    l++;
                }
                mpp.erase(s[l]);
                l++;
            }
        }
        return maxi;
    }
};