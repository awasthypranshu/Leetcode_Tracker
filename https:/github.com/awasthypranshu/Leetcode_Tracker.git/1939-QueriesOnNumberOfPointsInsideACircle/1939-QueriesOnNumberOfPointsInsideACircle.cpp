// Last updated: 26/07/2026, 22:03:41
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> result;

        for (auto& q : queries) {
            int x = q[0], y = q[1], r = q[2];
            int count = 0;

            for (auto& p : points) {
                int px = p[0], py = p[1];
                int dx = px - x;
                int dy = py - y;
                if (dx * dx + dy * dy <= r * r) {
                    count++;
                }
            }

            result.push_back(count);
        }

        return result;
    }
};
