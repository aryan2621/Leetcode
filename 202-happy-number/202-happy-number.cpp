class Solution {
public:
    int func(int n){
        int sum=0;
        while(n){
            sum+=(n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        while(1){
            if(n==1) return 1;
            if(n==89) return 0;
            n=func(n);
        }
        return 0;
    }
};