// Last updated: 26/07/2026, 22:04:04
class Solution {
public:
bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'
        || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    }
    int maxVowels(string s, int k) { 
        int vovel = 0;
        for(int i = 0; i < k; i++){
            if(isVowel(s[i])){
                vovel++;
            }
        }
        int maxV = vovel;
        for(int i = k; i < s.size(); i++){
            if(isVowel(s[i])){
                vovel++;
            }
            if(isVowel(s[i-k])){
                vovel--;
            }
            if(maxV < vovel){
                maxV = vovel;
            }
        }
        return maxV;
    }  
};