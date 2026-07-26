// Last updated: 26/07/2026, 22:03:53
class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int n = word1.size();
        int m = word2.size();

        if(n == m){
            if(word1 == word2) return true;
            else{
                vector<int>frequency(26);
                for(int i=0; i<n; i++){
                    frequency[word1[i]-'a']++;
                }
                for(int i=0; i<m; i++){
                    if(frequency[word2[i]-'a'] == 0){
                        return false;
                    }
                }

                sort(word1.begin(),word1.end());
                sort(word2.begin(),word2.end());

                vector<int>freq1;
                vector<int>freq2;
                
                int count = 1;
                for(int i = 0; i < n-1; i++){
                    if(word1[i] == word1[i+1]){
                        count++;
                    }else{
                        freq1.push_back(count);
                        count = 1;
                    }
                }
                freq1.push_back(count);
                count = 1;
                for(int i = 0; i < n-1; i++){
                    if(word2[i] == word2[i+1]){
                        count++;
                    }else{
                        freq2.push_back(count);
                        count = 1;
                    }
                }
                freq2.push_back(count);
                sort(freq1.begin(), freq1.end());
                sort(freq2.begin(), freq2.end());
                for(int i = 0; i < freq1.size(); i++){
                    if(freq1[i] != freq2[i]){
                        return false;
                    }
                }
                return true;
            }
        }
        return false;
    }
};