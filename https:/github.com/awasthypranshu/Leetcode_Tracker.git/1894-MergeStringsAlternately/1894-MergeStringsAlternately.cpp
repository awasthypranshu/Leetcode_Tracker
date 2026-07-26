// Last updated: 26/07/2026, 22:03:45
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string arr = "";
        int i = 0,j = 0;
        while(i < word1.length() && j < word2.length()){
            arr.push_back(word1[i]);
            arr.push_back(word2[j]);
            i++;
            j++;
        }
        while(i < word1.length()){
            arr.push_back(word1[i]);
            i++;
        }
        while(j < word2.length()){
            arr.push_back(word2[j]);
            j++;
        }
        return arr;
    }
};