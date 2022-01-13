class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        int s=points[0][0];
        int e=points[0][1];
        sort(points.begin(),points.end());
        if(points.size()==0) return 0;
        int ans=1;
        for(auto p:points){
            if(p[0] <= e){
                s=max(s,p[0]);
                e=min(e,p[1]);
            }
            else{
                ans+=1;
                s=p[0];
                e=p[1];
            }
        }
        return ans;
    }
};