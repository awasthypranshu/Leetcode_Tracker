// Last updated: 26/07/2026, 22:05:01
class Solution {
public:
    string reverseVowels(string s) {
        int i = 0, j = s.length()-1;
        while(i < j){
            while(s[i] != 'A'&&  s[i] != 'a'&& s[i] != 'e'&&  s[i] != 'E'&& s[i] != 'i'&&  s[i] != 'I'&& s[i]!= 'O'&&  s[i] != 'o'&& s[i] != 'u'&&  s[i] != 'U' && i <= j){
                i++;
            }
            while(s[j] != 'A'&&  s[j] != 'a'&& s[j] != 'e'&&  s[j] != 'E'&& s[j] != 'i'&&  s[j] != 'I'&& s[j] != 'O'&&  s[j] != 'o'&& s[j] != 'u'&&  s[j] != 'U' && j >= i){
                j--;
            }
            if(i < j){
                swap(s[i],s[j]);
                i++;
                j--;
            }      
        } 
        return s;
    }
};