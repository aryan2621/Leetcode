class Solution {
public:
    bool areNumbersAscending(string s) {
        int i=0;
        int prev=-1;
        while(i<s.size()){
            int f=0,t=0;
            while(i<s.size() and s[i]>='0' and s[i]<='9'){
                f=1;
                t=t*10+(s[i++]-'0');
            }
            if(f){
                if(prev>=t){
                    return 0;
                }
                prev=t;
            }
            i++;
        }
        return 1;
    }
};