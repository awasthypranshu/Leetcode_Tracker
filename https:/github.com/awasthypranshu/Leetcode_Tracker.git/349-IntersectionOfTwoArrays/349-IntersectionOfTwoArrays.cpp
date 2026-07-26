// Last updated: 26/07/2026, 22:04:58
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int high1 = nums1.size();
        int high2 = nums2.size();
        set<int> s1;
        set<int> s2;
        for(int i = 0; i < nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i = 0; i < nums2.size(); i++){
            s2.insert(nums2[i]);
        }
        vector<int> n;
        
        auto it = s1.begin();      // iterator to traverse s1
        for(int i = 0; i < s1.size(); i++){
            if(s2.find(*it) != s2.end()){   // use *it instead of s1[i]
                n.push_back(*it);
            }
            ++it;   // move to next element
        }
        
        return n;
    }
};