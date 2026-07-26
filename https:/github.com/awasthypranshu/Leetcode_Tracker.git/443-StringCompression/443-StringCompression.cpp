// Last updated: 26/07/2026, 22:04:51
class Solution {
public:
    int compress(vector<char>& chars) {
        if(chars.size() == 0) return 0;
        string s = "";
        int count = 1;
        int i = 1;
        while(i < chars.size()){
            if(chars[i] == chars[i-1]){
                count++;
            }else{
                if(count == 1){
                    s = s+chars[i-1];
                }else{
                    s = s+chars[i-1];
                    s = s+to_string(count);
                }
                count = 1;
            }
            i++;
        }
        if(count == 1){
            s = s+chars[i-1];
        }else{
            s = s+chars[i-1];
            s = s+to_string(count);
        }
        chars.resize(s.length());
        for(int i = 0; i < s.length(); i++){
            chars[i] = s[i];
        }
        return chars.size(); 
    }
};