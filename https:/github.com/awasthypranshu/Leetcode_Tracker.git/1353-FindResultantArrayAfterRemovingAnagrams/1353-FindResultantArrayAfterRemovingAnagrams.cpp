// Last updated: 26/07/2026, 22:04:13
class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string> ans;
        string prev = "";

        for (auto &w : words) {
            string sorted_w = w;
            sort(sorted_w.begin(), sorted_w.end());
            if (sorted_w != prev) {  
                ans.push_back(w);
                prev = sorted_w;
            }
        }
        return ans;
    }
};
