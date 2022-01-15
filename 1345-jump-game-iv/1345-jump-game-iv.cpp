class Solution {
public:
    int minJumps(vector<int>& arr) {
        
        unordered_map<int,vector<int>> m;
        
        for(int i=0;i<arr.size();i++) m[arr[i]].push_back(i);
        
        queue<int> q;
        q.push(0);
        vector<int> dis(arr.size(),1e9);
        
        dis[0]=0;
        
        while(!q.empty()){
            int pos=q.front();
            q.pop();
            if(pos==arr.size()-1) return dis[pos];
            vector<int> &list=m[arr[pos]];
            list.push_back(pos+1);
            list.push_back(pos-1);
            for(auto &x:list){
                if(x>=0 and x<arr.size() and dis[x]>dis[pos]+1){
                    dis[x] =dis[pos]+1;
                    q.push(x);
                }
            }
            list.clear();
        }
        return -1;
    }
};