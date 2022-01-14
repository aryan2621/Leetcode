class Solution {
public:
    bool areNumbersAscending(string s) {
        int p=0;
        string t="";
        int prev=0;
        for(int i=0;i<s.size();i++){
            while(isdigit(s[i])) t+=s[i++];
            if(t.size()!=0){
                if(prev<stoi(t)) prev=stoi(t);
                else return 0;
                 t="";
            }
        }
        return 1;
    }
};