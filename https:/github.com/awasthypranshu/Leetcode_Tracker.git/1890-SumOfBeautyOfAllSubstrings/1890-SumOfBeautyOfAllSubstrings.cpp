// Last updated: 26/07/2026, 22:03:46
class Solution {
public:
    int beautySum(string s) {
        int n = s.length();
        int totalBeauty = 0;

        for (int i = 0; i < n; i++) {
            map<char,int> freq;  
            for (int j = i; j < n; j++) {
                freq[s[j]]++;  

                int maxFreq = 0;
                int minFreq = INT_MAX;
                for (auto it : freq) {
                    maxFreq = max(maxFreq, it.second);
                    minFreq = min(minFreq, it.second);
                }

                if (maxFreq > minFreq) {  
                    totalBeauty += (maxFreq - minFreq);
                }
            }
        }

        return totalBeauty;  
    }
};
