// Last updated: 26/07/2026, 22:06:17
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs[0].length();
        int i = 0;
        if (strs.empty()) return "";
        string str = "";
        for(int l = 0; l < n; l++){
            for(int j = 0; j < strs.size(); j++){
                if(strs[0][l]==strs[j][l]){
                    continue;
                }else{
                    return str;
                }
            }
            str.push_back(strs[0][l]);   
        }
        return str;
    }
};