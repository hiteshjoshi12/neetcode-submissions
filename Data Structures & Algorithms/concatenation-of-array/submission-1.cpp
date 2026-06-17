class Solution {
public:
  vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        // 1. Pre-allocate the exact size needed
        vector<int> ans(2 * n);
        
        // 2. Fill the vector in a single loop
        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];       // First half
            ans[i + n] = nums[i];   // Second half
        }
        
        return ans;
    }
};