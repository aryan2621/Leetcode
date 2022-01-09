class Solution {
public:
    bool func(map<char,int> m){
        if(m['N'] == m['S'] && m['E'] == m['W']) return 1;
        return 0;
    }
    bool isRobotBounded(string instructions) {
       char curr_din='N';
        map<char,int> m;
        for(int i=0;i<instructions.size();i++){
            if(instructions[i]=='G') m[curr_din]++;
            else{
                char instruction=instructions[i];
                if(curr_din=='N'){
                    curr_din=instruction=='L'?'W':'E';
                }
                else if(curr_din=='W'){
                    curr_din=instruction=='L' ? 'S' : 'N';
                }
                else if(curr_din=='S'){
                    curr_din=instruction=='L' ? 'E' : 'W';
                }
                else{
                    curr_din=instruction=='L' ? 'N' : 'S';
                }
            }
        }
        if(func(m) or curr_din!='N') return 1;
        return 0;
    }
};