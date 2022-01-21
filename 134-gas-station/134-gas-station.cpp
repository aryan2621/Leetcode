class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int start =0,avail=0,shortage =0;
       for(int i=0;i<gas.size();i++){
           avail+=gas[i] -cost[i];
           if(avail<0){
               start=i+1;
               shortage +=avail;
               avail=0;
           }
       }
       if(avail+shortage>=0) return start;
       return -1;
    }
};