class Solution {
public:
    string removeDuplicateLetters(string s) {
        string ans="";
        unordered_map<char,int> m;
        unordered_map<char,bool> vis;
        for(auto i:s) m[i]++;
        
        for(auto i:s){
            m[i]--;
            if(vis[i]) continue;
            while(!ans.empty() && i<ans.back() && m[ans.back()]>0){
                vis[ans.back()]=0;
                ans.pop_back();
            }
            ans+=i;
            vis[i]=1;
        }
        return ans;
    }
};