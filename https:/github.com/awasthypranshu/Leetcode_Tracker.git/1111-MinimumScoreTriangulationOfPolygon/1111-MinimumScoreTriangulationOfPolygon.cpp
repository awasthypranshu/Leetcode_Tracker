// Last updated: 26/07/2026, 22:04:14
class Solution {
public:
    int minScoreTriangulation(std::vector<int>& values) {
        int n = values.size();
        if (n < 3) {
            return 0;
        }

        // dp[i][j] stores the minimum score for the polygon from vertex i to j
        std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));

        // len is the length of the chain of vertices.
        // We start with len = 2, which corresponds to 3 vertices (a single triangle).
        for (int len = 2; len < n; ++len) {
            // i is the starting vertex of the sub-polygon
            for (int i = 0; i < n - len; ++i) {
                // j is the ending vertex
                int j = i + len;
                
                // Initialize dp[i][j] with a very large value
                dp[i][j] = std::numeric_limits<int>::max();
                
                // k is the splitting vertex to form the triangle (i, k, j)
                for (int k = i + 1; k < j; ++k) {
                    // Calculate the score for this particular triangulation
                    // Note: Use long long for the product to prevent overflow, then cast back if needed.
                    long long current_cost = static_cast<long long>(dp[i][k]) + 
                                             dp[k][j] + 
                                             static_cast<long long>(values[i]) * values[j] * values[k];
                    
                    // Update the minimum score for this sub-polygon
                    dp[i][j] = std::min(dp[i][j], static_cast<int>(current_cost));
                }
            }
        }
        
        // The final answer is the score for the entire polygon (from vertex 0 to n-1)
        return dp[0][n - 1];
    }
};