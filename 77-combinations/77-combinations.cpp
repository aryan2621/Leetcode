class Solution {
public:
    void solve(int s,int k,int n,vector<vector<int>> &ans,vector<int> &t){
        if(s>k){
            ans.push_back(t);
            return;
        }
        for(int i=s;i<=n;i++){
            if(t.size()!=0 && t[t.size()-1]>=i) continue;
            
            t.push_back(i);
            solve(s+1,k,n,ans,t);
            t.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> t;
        solve(1,k,n,ans,t);
        return ans;
    }
};