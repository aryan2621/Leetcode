class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
         int left = -1, maxDis = 0;
        int len = seats.size();
        
        for (int i = 0; i < len; i++) {
            if (seats[i] == 0) continue;

            if (left == -1) {
                maxDis = max(maxDis, i);
            } else {
                maxDis = max(maxDis, (i - left) / 2);
            }
            left = i;
        }
        
        if (seats[len - 1] == 0) {
            maxDis = max(maxDis, len - 1 - left);
        }
        
        return maxDis;
    }
};