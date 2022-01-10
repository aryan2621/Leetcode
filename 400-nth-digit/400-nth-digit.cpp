class Solution {
public:
    int findNthDigit(int n) {
       long int base =9;
       long int digits=1;
        while(n-base*digits>0){
            n-=base*digits;
            base*=10;
            digits+=1;
        }
        int index = (n - 1) % digits;
        int offset = (n - 1) / digits;
        long start = pow(10, digits - 1);
        cout<<index<<" "<<offset<<" "<<start<<endl;
        return to_string(start + offset)[index] - '0'; 
    }
};