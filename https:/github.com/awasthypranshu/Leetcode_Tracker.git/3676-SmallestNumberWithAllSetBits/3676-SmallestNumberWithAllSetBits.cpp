// Last updated: 26/07/2026, 22:03:21
class Solution {
public:
    int smallestNumber(int n) {
         bitset<32> b(n);                
        string s = b.to_string();         
        s.erase(0, s.find('1'));          
        
        for (char &ch : s) ch = '1';

        return stoi(s, 0, 2);
    }
};