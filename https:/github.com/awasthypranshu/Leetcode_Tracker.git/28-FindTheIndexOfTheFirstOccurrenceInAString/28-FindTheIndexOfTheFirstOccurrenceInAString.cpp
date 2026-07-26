// Last updated: 26/07/2026, 22:06:08
class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(), m = needle.size();
        for (int i = 0; i <= n - m; i++) {
            if (haystack.substr(i, m) == needle)
                return i;
        }
        return -1;
    }
};