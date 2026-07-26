// Last updated: 26/07/2026, 22:03:42
class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        if(m > n){
            return false;
        }else if(n > m){
            return false;
        }
        if(s1 == s2) return true;
        
        int first = 0;
        int last = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            if(s1[i] != s2[i]){
                if(count == 0){
                    first = i;
                    count++;
                }
                else if(count == 1){
                    last = i;
                    swap(s1[first],s1[last]);
                    if(s1 == s2) return true;
                    else return false;
                }
            }
        }
        return false;
    }
};