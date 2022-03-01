class Solution {
public:
    vector<int>originalArray;
    vector<int>randomArray;
    Solution(vector<int>& nums) {
        originalArray=nums;
        randomArray=nums;
    }
    
   
    vector<int> reset() {
        return originalArray;
    }
    
  
    vector<int> shuffle() {
         int n = randomArray.size();
        for(int i=0;i<n;i++)
            swap(randomArray[i], randomArray[(rand()%(n-i))+i]);
        
        return randomArray;
    }
};
