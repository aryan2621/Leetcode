// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int fib(int N){
int t=0,t1=1,s,i;
if(N<=1)
return N;
for(i=2;i<=N;i++)
{
s=(t+t1)%10;
t=t1;
t1=s;
}
return s;
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.fib(N) << endl;
    }
    return 0; 
}  // } Driver Code Ends