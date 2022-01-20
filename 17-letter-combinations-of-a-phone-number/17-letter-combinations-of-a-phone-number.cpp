class Solution {
public:
   void DFS(string digits, int pos, string& path, vector<string>& res, vector<string>& letter){
        if(pos == digits.size()){
            res.push_back(path);
            return;
        }
        for(auto c: letter[digits[pos] - '0']){
            path.push_back(c);
            DFS(digits, pos + 1, path, res, letter);
            path.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.empty()) return ans;
        vector<string>mobile({"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"});
        string temp = "";
        DFS(digits, 0, temp, ans, mobile);
        return ans;
    }
};