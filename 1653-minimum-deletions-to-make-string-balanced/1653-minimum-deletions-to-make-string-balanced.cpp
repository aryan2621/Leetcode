class Solution {
public:
    int minimumDeletions(string s) {
        int n=s.size();
        int ans=INT_MAX;
        vector<int> a(n,0),b(n,0);
        int c=0;
        for(int i=n-1;i>=0;i--){
            a[i]=c;
            c+=(s[i]=='a');
        }
        c=0;
        for(int i=0;i<n;i++){
            b[i]=c;
            c+=(s[i]=='b');
        }
        for(int i=0;i<n;i++) ans=min(ans,a[i]+b[i]);
        
        return ans;
    }
};