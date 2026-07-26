// Last updated: 26/07/2026, 22:05:33
class Solution {
public:
    string reverseWords(string s) {
        string t = "";
        int i = 0;
        while(i < s.length()){
            if(s[i] == ' '){
                i++;
            }
            else{
                while(i < s.length() && s[i] != ' '){
                    t = t + s[i];
                    i++;
                }
                t = t + ' ';
            }
        }
        if(!t.empty()) t.pop_back();

        string word = "";
        s = "";
        int j = 0;
        while(j < t.length()){
            if(t[j] == ' '){
                s = word+" "+ s;
                word = "";
                j++;
            }
            else{
                word = word + t[j];
                j++;
            }
        }
        s = word+" "+ s;
        if(!s.empty()) s.pop_back();
        return s; 
    }
};