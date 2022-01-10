class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = nums[0], temp = nums[0];
        for (int ind = 1; ind < nums.size(); ind++) {
            temp = max(temp + nums[ind], nums[ind]);
            ans = max(ans, temp);
        }
        return ans;
    }
};