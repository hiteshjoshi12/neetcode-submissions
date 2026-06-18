class Solution {
   public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0;
        int j = n - 1;
        int maxarea = INT_MIN;
        while (i < j) {
            int h = min(heights[i], heights[j]);
            int w = j - i;
            int area = h * w;
            maxarea = max(maxarea, area);

            if (heights[i] > heights[j]) {
                j--;
            } else {
                i++;
            }
        }
        return maxarea;
    }
};
