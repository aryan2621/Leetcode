class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n));
        int tr=0;
        int tc=0;
        int br=n-1;
        int bc=n-1;
        int c=0;
        while(tr<=br and tc<=bc){
            for(int i=tc;i<=bc;i++){
                c++;
                ans[tr][i]=c;
            }
            for(int i=tr+1;i<=br;i++){
                 c++;
                ans[i][bc]=c;
            }
            for(int j=bc-1; j>=tc; --j) {
                ++c;
                ans[br][j] = c;
            }
            for(int i=br-1; i>tr; --i) {
                ++c;
                ans[i][tc] = c;
            }
               
            tr++;
            tc++;
            bc--;
            br--;
        }
        return ans;
    }
};