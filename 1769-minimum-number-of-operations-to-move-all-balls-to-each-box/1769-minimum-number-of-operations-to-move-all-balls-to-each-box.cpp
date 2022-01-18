class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans(boxes.size());
        int n=boxes.size();
        
        for(int i=0,t=0,c=0;i<n;i++){
                ans[i]+=t;
                c+=boxes[i]=='1'?1:0;
                t+=c;
        }
        
        for(int i=n-1,t=0,c=0;i>=0;i--){
                ans[i]+=t;
                c+=boxes[i]=='1'?1:0;
                t+=c;
        }
        return ans;
    }
};