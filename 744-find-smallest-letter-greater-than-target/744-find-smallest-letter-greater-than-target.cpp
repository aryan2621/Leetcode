class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        auto i=upper_bound(letters.begin(),letters.end(),target);
       return i == letters.end() ? letters[0] : *i;
    }
};