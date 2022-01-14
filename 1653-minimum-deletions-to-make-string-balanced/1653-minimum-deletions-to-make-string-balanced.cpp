class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int pre[n+1];
        int post[n+2];
        pre[0]=0;
        for(int i=1;i<=n;i++) pre[i]=pre[i-1]+(s[i-1]=='b');
        
        post[n+1]=0;
        
        for(int i=n;i>=1;i--) post[i]=post[i+1]+(s[i-1]=='a');
            
        int ans=INT_MAX;
        for(int i=0;i<=n;i++) ans=min(ans,pre[i]+post[i+1]);
        return ans;
    }
};