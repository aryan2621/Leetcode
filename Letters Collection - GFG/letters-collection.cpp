// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:
        int helper(vector<vector<int>> mat,int r , int c){
        if(r >= mat.size() or c >= mat[0].size() or r < 0 or c < 0)
            return 0;
        return mat[r][c];
    }
    vector<int> matrixSum(int n, int m, vector<vector<int>> mat, int q, vector<int> que[])
    {
        // code here
        vector<int> ret;
        int ax[] = {0,0,1,-1,-1,-1,1,1};
        int by[] = {1,-1,0,0,-1,1,-1,1};
        int ax1[] = {-2,-2,-2,-2,-2,-1,0,1,2,2,2,2,2,1,0,-1};
        int by1[] = {-2,-1,0,1,2,2,2,2,2,1,0,-1,-2,-2,-2,-2};
        for(int i = 0 ; i < q; i ++){
            int cnt = 0;
            if(que[i][0] == 1){
                for(int j = 0 ; j < 8 ; j ++){
                        cnt += helper(mat,que[i][1] + ax[j] ,que[i][2] + by[j]);
                }
            }
            else{
                for(int j = 0 ; j < 16 ; j ++){
                        cnt += helper(mat,que[i][1] + ax1[j] ,que[i][2] + by1[j]);
                }
            }
            ret.push_back(cnt);
        }
        return ret;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m, q, ty, i, j;
        cin>>n>>m;
        vector<vector<int>> mat(n, vector<int>(m, 0));
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin>>mat[i][j];
        cin>>q;
        vector<int> queries[q];
        for(int k = 0;k < q;k++){
            cin>>ty>>i>>j;
            queries[k].push_back(ty);
            queries[k].push_back(i);
            queries[k].push_back(j);
        }
        
        Solution ob;
        vector<int> ans = ob.matrixSum(n, m, mat, q, queries);
        for(int u: ans)
            cout<<u<<"\n";
    }
    return 0;
}  // } Driver Code Ends