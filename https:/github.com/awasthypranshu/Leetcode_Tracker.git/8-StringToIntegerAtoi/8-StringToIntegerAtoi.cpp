// Last updated: 26/07/2026, 22:06:26
class Solution {
public:
    int myAtoi(string s) {
        string s1 = "";
        bool negative = false;
        bool signProcessed = false;

        for(int i = 0; i < s.length(); i++){
            // skip leading spaces before digits or sign
            if(s[i] == ' ' && s1.empty() && !signProcessed) {
                continue;
            }

            // handle first '-' or '+'
            if((s[i] == '-' || s[i] == '+') && s1.empty() && !signProcessed){
                negative = (s[i] == '-');
                signProcessed = true;
                continue;
            }

            // if a sign appears again before digits → invalid
            if((s[i] == '-' || s[i] == '+') && !s1.empty()) {
                break;
            }

            // digits
            if(s[i] >= '0' && s[i] <= '9'){
                s1.push_back(s[i]);
            }
            else {
                // any other character including space after digits → stop parsing
                break;
            }
        }

        if(s1.empty()) return 0;

        // manual conversion to handle overflow
        long num = 0;
        for(char c : s1) {
            num = num * 10 + (c - '0');

            if(!negative && num > INT_MAX) return INT_MAX;
            if(negative && -num < INT_MIN) return INT_MIN;
        }

        return negative ? -num : num;
    }
};
