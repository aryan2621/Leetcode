class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(binary_search(nums.begin(),nums.end(),target)){
           int u=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int v=upper_bound(nums.begin(),nums.end(),target)-nums.begin();  
            return {u,v-1};
        }
                          
       return {-1,-1};
        
    }
};