class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int i = (temp.size()-1)/2,j = temp.size()-1,k = 0;
        while(k < nums.size())
        {
            if(k&1) nums[k++] = temp[j--];
            else nums[k++] = temp[i--];
        }
    }
};