class Solution {
public:
    int binaryGap(int n) {
        bitset<32> b(n);
        string s=b.to_string();
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]=='1'){
                break;
            }
        }
        int ans=0,p=i;
        for(;i<s.size();i++){
            if(s[i]=='1'){
                ans=max(ans,i-p);
            p=i;
            }
            
        }
        return ans;
    }
};