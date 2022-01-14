class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int a[n+1];
        int b[n+2];
        a[0]=0;
        for(int i=1;i<=n;i++) a[i]=a[i-1]+(s[i-1]=='b');
        
        b[n+1]=0;
        
        for(int i=n;i>=1;i--) b[i]=b[i+1]+(s[i-1]=='a');
            
        int ans=INT_MAX;
        
        for(int i=0;i<=n;i++) ans=min(ans,a[i]+b[i+1]);
        return ans;
    }
};