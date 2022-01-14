class Solution {
public:
    string addStrings(string num1, string num2) {
        string res="";
        int c=0;
        int i=num1.size()-1;
        int j=num2.size()-1;
        while(i>=0 or j>=0 or c){
            int s=0;
            s+=i>=0?num1[i--]-'0':0;
            s+=j>=0?num2[j--]-'0':0;
            s+=c;
            c=s/10;
            s=s%10;
            res+=to_string(s);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};