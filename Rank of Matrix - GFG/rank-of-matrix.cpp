#include<iostream>
using namespace std;
int main()
 {
	int t;
    cin>>t;
    while(t--){
        int arr[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr[i][j];
            }
        }
        int rank=3;
        int det;
        int x = ((arr[1][1] * arr[2][2]) - (arr[2][1] * arr[1][2]));
           int y = ((arr[1][0] * arr[2][2]) - (arr[2][0] * arr[1][2]));
             int z = ((arr[1][0] * arr[2][1]) - (arr[2][0] * arr[1][1]));
        
        det = ((arr[0][0] * x) - (arr[0][1] * y) + (arr[0][2] * z));
        if(det==0){
            rank=2;
            if(!((arr[0][0]*arr[1][1])-(arr[1][0]*arr[0][1]))){
            rank=1;
            if(arr[0][0]==0)
            rank=0;
            }
            
        }
        cout<<rank<<endl;
    }
	return 0;
}