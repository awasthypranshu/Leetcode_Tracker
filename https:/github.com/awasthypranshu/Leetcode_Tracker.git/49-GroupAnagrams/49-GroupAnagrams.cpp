// Last updated: 26/07/2026, 22:05:59
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string,vector<string>> mpp;
        for(int i = 0; i < strs.size(); i++){
            string word = strs[i];
            sort(word.begin(),word.end());
            mpp[word].push_back(strs[i]);
        }
        vector<vector<string>> ans;
        for(auto &it: mpp){
            ans.push_back(it.second);
        }
        return ans;
    }
};