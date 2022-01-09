class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int p=1;
        int ans=0;
        while(n){
            ans+=((1-(n%2))*p);
            n/=2;
            p*=2;
        }
        return ans;
    }
};