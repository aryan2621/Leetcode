class Solution {
public:
    bool bin_search(vector<int> &a,int m,int mid,int k){
        int n=a.size();
        int f=0;
        int b=0;
        for(int i=0;i<n;i++){
           if (a[i] > mid) {
                    f = 0;
                } else if (++f >= k) {
                    b++;
                    f = 0;
                }
        }
        return b<m;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int l=1;
        int h=int(1e9);
        int n=bloomDay.size();
        if(m*k>n) return -1;
        int ans=0;
        while(l<h){
            int mid=l+(h-l)/2;
            bin_search(bloomDay,m,mid,k)?l=mid+1:h=mid;
        }
        return l;
    }
};