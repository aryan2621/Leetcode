class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int prev=0;
        int next=0;
        int c=0;
        int s=flowerbed.size();
        for(int i=0;i<s;i++){
            if(flowerbed[i]==0){
                prev=(i==0 or flowerbed[i-1]==0)?0:1;
                next=(i==s-1 or flowerbed[i+1]==0)?0:1;
                
                if(!prev and !next){
                    flowerbed[i]=1;
                    c+=1;
                }
            }
        }
        return c>=n;
    }
};