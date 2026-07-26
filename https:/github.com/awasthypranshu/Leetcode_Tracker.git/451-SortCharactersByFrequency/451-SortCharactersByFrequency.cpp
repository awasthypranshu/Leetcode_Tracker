// Last updated: 26/07/2026, 22:04:49
class Solution {
public:
    string frequencySort(string s) {
        map<char , int> mpp;
        for(int i = 0; i < s.length(); i++){
            mpp[s[i]]++;
        }
        vector<pair<char,int>> toSort;
        for(auto it : mpp){
            toSort.push_back({it.first,it.second});
        }
        for(int i = 0; i < toSort.size()-1; i++) {
            for(int j = i+1; j < toSort.size(); j++) {
                if(toSort[i].second < toSort[j].second) {
                    swap(toSort[i], toSort[j]);
                }
            }
        }
        string ans = "";
        for(int i = 0; i < toSort.size(); i++){
            for(int j = 0; j < toSort[i].second; j++){
                ans.push_back(toSort[i].first);
            }
        }
        return ans;
    }
};