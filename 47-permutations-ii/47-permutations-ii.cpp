class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        temp=nums;
        next_permutation(temp.begin(),temp.end());
        ans.push_back(temp);
        while(nums!=temp){
            next_permutation(temp.begin(),temp.end());
            ans.push_back(temp);   
        }
        return ans;
    }
};