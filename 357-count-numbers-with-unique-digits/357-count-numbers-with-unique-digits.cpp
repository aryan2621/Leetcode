class Solution {
public:
    int func(int n,int d){
         int f = 1;
        for(;d>0;d--) f*=n--;
        return f;
    }
    
    int countNumbersWithUniqueDigits(int n) {
        if(n==0) return 1;
        int ans=0;
        for(int i=1;i<=n;i++){
          if(i==1)   ans+=10;
            else{
                ans+=9*func(9,i-1);
            }
        } 
        return ans;
    }
};