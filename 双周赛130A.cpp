class Solution {
public:
    bool satisfiesConditions(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size() - 1; j++) {
                if (grid[i][j] == grid[i][j + 1]) {
                    return false;
                }
            }
        }

        for (int i = 0; i < grid.size()-1; i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] != grid[i + 1][j]) {
                    return false;
                }
            }

        }
        return true;
    }
};
