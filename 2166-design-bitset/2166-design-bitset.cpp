class Bitset {
public:
    string s,t;
    int sum;
    Bitset(int size) {
        for(int i=0;i<size;i++){
            s.push_back('0');
            t.push_back('1');
        }
        sum=0;
    }
    
    void fix(int idx) {
        if(s[idx]=='0') sum++;
        s[idx]='1';
        t[idx]='0';
    }
    
    void unfix(int idx) {
         if(s[idx]=='1') sum--;
        s[idx]='0';
        t[idx]='1';
    }
    
    void flip() {
        sum=s.size()-sum;
        swap(s,t);
    }
    
    bool all() {
        return sum==s.size();
    }
    
    bool one() {
        return sum>0;
    }
    
    int count() {
        return sum;
    }
    
    string toString() {
        return s;
    }
};
