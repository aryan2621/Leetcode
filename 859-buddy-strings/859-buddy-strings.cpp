class Solution {
public:
    bool buddyStrings(string s, string t) {
        if(s==t){
            set<char> st;
            for(auto i:s) st.insert(i);
            return st.size()<s.size();
        }
        int n=s.size();
        int i=0;
        int j=s.size()-1;
        while(i<n and s[i]==t[i]) i++;
        while(j>=0 and s[j]==t[j]) j--;
        if(i<j) swap(s[i],s[j]);
        return s==t;
    }
};