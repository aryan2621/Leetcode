class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        int temp = 0;
        for(int i = 0;  i < nums.size(); i++){
            temp += nums[i];
            if(sum - temp + nums[i] == temp){
                return i;
            }
        }
        return -1;
    }
};