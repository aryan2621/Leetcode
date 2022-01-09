class Solution {
public:
    string longestNiceSubstring(string s) {
        if(s.size()<2) return "";
        int n=s.size();
        unordered_set<char>  v(begin(s),end(s));
        for(int i=0;i<n;i++){
            if(v.find((char) toupper(s[i])) == end(v) or v.find((char) tolower(s[i])) == end(v)){
                string s1=longestNiceSubstring(s.substr(0,i));
                 string s2=longestNiceSubstring(s.substr(i+1));
                return s1.size()>=s2.size()?s1:s2;
            }
        }
        return s;
    }
};