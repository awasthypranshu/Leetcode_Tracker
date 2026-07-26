// Last updated: 26/07/2026, 22:04:06
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int l = 0;
        int r = 0;
        int total = 0;
        int ws = 0;
        int mws = 0;
        for(int i = 0; i < n; i++){
            total = total + cardPoints[i];
        }
        while(r < n-k){
            ws = ws + cardPoints[r];
            r++;
        }
        mws = ws;
        while(r < n){
            ws = ws - cardPoints[l] + cardPoints[r];
            l++;
            r++;
            if(ws < mws){
                mws = ws;
            }
        }
        return total - mws;
    }
};