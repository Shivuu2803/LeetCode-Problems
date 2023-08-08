class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();  // Corrected line
        int x1 = nums[0];
        int x2 = 0;

        for (int i = 1; i < n; i++) {
            x1 = x1 ^ nums[i];
        }
        for (int i = 1; i <= n; i++) {
            x2 = x2 ^ i;
        }
        return (x1 ^ x2);
    }
};
