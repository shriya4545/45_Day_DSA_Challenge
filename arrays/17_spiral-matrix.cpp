class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
     vector<int> res;
        for (int left = 0, right = matrix[0].size() - 1,
                 top = 0, bottom = matrix.size() - 1;
             left <= right && top <= bottom;
             ++left, --right, ++top, --bottom) {

            for (int j = left; j <= right; ++j) {
                res.push_back(matrix[top][j]);
            }
            for (int i = top + 1; i < bottom; ++i) {
                res.push_back(matrix[i][right]);
            }
            for (int j = right; top < bottom && j >= left; --j) {
                res.push_back(matrix[bottom][j]);
            }
            for (int i = bottom - 1; left < right && i > top; --i) {
                res.push_back(matrix[i][left]);
            }
        }

        return res;
    }
};