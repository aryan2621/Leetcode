class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int cnt = 0, rank = 0;
        for (int n : nums) {
            cnt += n == target;
            rank += n < target;
        }
        vector<int> ans;
        while (cnt--) ans.push_back(rank++);
        return ans; 
    }
};