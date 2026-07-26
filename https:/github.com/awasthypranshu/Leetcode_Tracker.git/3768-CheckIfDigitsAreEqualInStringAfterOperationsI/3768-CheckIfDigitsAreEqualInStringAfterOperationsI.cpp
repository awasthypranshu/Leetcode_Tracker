// Last updated: 26/07/2026, 22:03:15
class Solution {
public:
    bool hasSameDigits(string s) {
        while (s.length() > 2) {
            string d = "";
            for (int i = 0; i < s.length() - 1; i++) {
                char x = (((s[i] - '0') + (s[i + 1] - '0')) % 10) + '0';
                d.push_back(x);
            }
            s = d;
        }
        return s[0] == s[1];
    }
};
