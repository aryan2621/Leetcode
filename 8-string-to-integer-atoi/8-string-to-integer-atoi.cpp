class Solution {
public:
    int myAtoi(string s) {
        string m="";
        int i =0;
        while(i<s.size()){
            if(!m.empty() and s[i]==' ') break;
            if(s[i]!=' ') m.push_back(s[i]);
            i++;
        }
        if(m=="") return 0;
        stringstream ss(m);
        int n;
        ss>>n;
        return n;
    }
    
};