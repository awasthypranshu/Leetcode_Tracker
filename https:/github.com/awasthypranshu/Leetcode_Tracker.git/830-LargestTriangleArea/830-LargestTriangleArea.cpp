// Last updated: 26/07/2026, 22:04:28
class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        double maxArea = 0.0;

        // Check all possible triplets of points
        for (int i = 0; i < points.size(); i++) {
            for (int j = i + 1; j < points.size(); j++) {
                for (int k = j + 1; k < points.size(); k++) {
                    // Coordinates of the 3 points
                    int x1 = points[i][0], y1 = points[i][1];
                    int x2 = points[j][0], y2 = points[j][1];
                    int x3 = points[k][0], y3 = points[k][1];

                    // Area formula using determinant method
                    double area = 0.5 * abs(x1 * (y2 - y3) +
                                            x2 * (y3 - y1) +
                                            x3 * (y1 - y2));
                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};
