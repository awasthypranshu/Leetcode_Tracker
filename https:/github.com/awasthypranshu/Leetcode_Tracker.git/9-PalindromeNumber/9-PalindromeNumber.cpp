// Last updated: 26/07/2026, 22:06:22
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int left = 0, right = s.length()-1;
        while(left <= right){
            if(s[left] == s[right]){
                left++;
                right--;
            }else{
                return false;
            }
        }
        return true;
    }
};