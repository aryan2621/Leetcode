class Solution {
public:
    int myAtoi(string str) {
        int r = 0;
        stringstream ss;
        ss << str;
        ss >> r;
        cout<<str<<" "<<r<<" "<<endl;
        return r;
    }
    
};