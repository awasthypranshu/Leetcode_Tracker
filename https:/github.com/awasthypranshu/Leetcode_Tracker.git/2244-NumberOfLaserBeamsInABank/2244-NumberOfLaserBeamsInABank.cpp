// Last updated: 26/07/2026, 22:03:32
class Solution {
public:
    int countRowBeams(string s){
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == '1') count++;
        }
        return count;
    }
public:
    int numberOfBeams(vector<string>& bank) {
        int i = 0;
        int totalBeams = 0;
        int m = 0, n = 0;
        while(i < bank.size()){
            while(i < bank.size() && m < 1){
                m = countRowBeams(bank[i]);
                i++;
            }
            while(i < bank.size() && n < 1){
                n = countRowBeams(bank[i]);
                i++;
            }
            if(m > 0 && n > 0){
                totalBeams += m * n;
                m = n;   
                n = 0;
            }
        }
        return totalBeams;
    }
};