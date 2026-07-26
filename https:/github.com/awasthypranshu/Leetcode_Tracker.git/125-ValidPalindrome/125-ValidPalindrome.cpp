// Last updated: 26/07/2026, 22:05:42
class Solution {
public:
    bool isPalindrome(string s) {
        string s1;
        for(int i=0; i<s.length(); i++){
            if((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122) || (s[i] >= '0' && s[i] <= '9')){
                s1 += tolower(s[i]);
            }
        }

        int left = 0;
        int right = s1.length()-1;
        while(left <= right){
            if(s1[left] != s1[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};