class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int num_islands = 0;
        int rows = grid.size();
        if (rows == 0) return 0;
        int cols = grid[0].size();

        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                if (grid[i][j] == '1') {
                    num_islands++;
                    dfs(grid, i, j);
                }
            }
        }

        return num_islands;
    }

private:
    void dfs(vector<vector<char>>& grid, int row, int col) {
        int rows = grid.size();
        int cols = grid[0].size();

        if (row < 0 || row >= rows || col < 0 || col >= cols || grid[row][col] == '0') {
            return;
        }

        grid[row][col] = '0'; // Mark as visited

        // Explore adjacent cells
        dfs(grid, row + 1, col);
        dfs(grid, row - 1, col);
        dfs(grid, row, col + 1);
        dfs(grid, row, col - 1);
    }
};