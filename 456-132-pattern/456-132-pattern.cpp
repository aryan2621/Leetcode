class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++) prefix[i]=min(prefix[i-1],nums[i]);
        
        set<int> s;
        s.insert(nums[n-1]);
        for(int i= n-2;i>=0;i--){
            auto it =s.lower_bound(nums[i]);
            if(it!=s.begin()){
                it--;
                if(*it>prefix[i]) return 1;
            }
            s.insert(nums[i]);
        }
        return 0;
    }
};