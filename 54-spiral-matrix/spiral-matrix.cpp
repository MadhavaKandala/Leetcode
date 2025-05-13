class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ret;
        int m = matrix.size();
        int n = matrix[0].size();
        int top = 0, bottom = m - 1;
        int left = 0, right = n - 1;
    
        while (top <= bottom && left <= right) {
            // Add the first row
            for (int col = left; col <= right; ++col) {
                ret.push_back(matrix[top][col]);
            }
            ++top;
    
            // Add the last element of the last column
            for (int row = top; row <= bottom; ++row) {
                ret.push_back(matrix[row][right]);
            }
            --right;
    
            if (top <= bottom) {
                // Add the last row in reverse
                for (int col = right; col >= left; --col) {
                    ret.push_back(matrix[bottom][col]);
                }
                --bottom;
            }
    
            if (left <= right) {
                // Add the first element of the column in reverse
                for (int row = bottom; row >= top; --row) {
                    ret.push_back(matrix[row][left]);
                }
                ++left;
            }
        }
    
        return ret;
    }
};