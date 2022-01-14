class Solution {
public:
    int minimumDeletions(string s) {
        int ans=0;
        stack<char> st;
        int n=s.size();
        for(int i=n-1;i>=0;i--){
            char c=s[i];
            if(!st.empty() and st.top()<c){
                ans+=1;
                st.pop();
            }
            else{
                st.push(c);
            }
        }
        return ans;
    }
};