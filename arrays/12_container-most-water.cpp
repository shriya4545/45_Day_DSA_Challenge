class Solution {
public:
//two pointers, greedy
    int maxArea(vector<int>& height) {
        int ans = 0, i = 0, j = height.size()-1, res = 0;
        while (i < j) {
            if (height[i] <= height[j]) {
                res = height[i] * (j - i);
                i++;
            } else {
                res = height[j] * (j - i);
                j--;
            }
            if (res > ans) ans = res;
        }
        return ans;
    }
    
};