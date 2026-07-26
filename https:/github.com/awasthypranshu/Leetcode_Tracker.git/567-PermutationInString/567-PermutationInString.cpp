// Last updated: 26/07/2026, 22:04:42
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        map<char,int>mpp;
        for(int i = 0; i < s1.length(); i++){
            mpp[s1[i]]++;
        }
        int i = 0;
        int j = 0;
        string s;
        while(j < s1.size()){
            s = s + s2[j];
            j++;
        }
        
        while(j < s2.length()){
            string a = s1;
            string b = s;

            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            if(a == b) return true;
            s.erase(0,1);
            if(j < s2.length())
                s = s + s2[j];
            i++;
            j++;
        }
        string a = s1;
        string b = s;

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        if(a == b) return true;
        return false;
    }
};