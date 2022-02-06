class Solution {
public: 
    vector<int> sortEvenOdd(vector<int>& nums) {
       vector<int> o,e;
        int n=nums.size();
        for(int i=0;i<nums.size();i++){
            if(i%2==1) o.push_back(nums[i]);
            else e.push_back(nums[i]);
        }
        sort(o.begin(),o.end(),greater<int>());
        sort(e.begin(),e.end());
        vector<int> res;
        int j=0,k=0,ans=0,i=0;
        while(i<n){
            if(i%2==1) ans=o[j++];
            else ans=e[k++];
            res.push_back(ans);
            i++;
        }
        return res;
    }
};