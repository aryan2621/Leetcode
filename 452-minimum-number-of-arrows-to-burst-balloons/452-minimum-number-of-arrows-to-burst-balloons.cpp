class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
       if(points.size()==0)  return 0;
        sort(points.begin(),points.end(),[](vector<int> &a,vector<int> &b){
            return a[1]<b[1];
        });
        int ans=1;
        int end=points[0][1];
        for(auto p:points){
            if(p[0]<=end) continue;
            ans+=1;
            end=p[1];
        }
        return ans;
    }
};