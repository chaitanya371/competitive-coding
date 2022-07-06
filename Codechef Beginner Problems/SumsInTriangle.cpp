#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--) {
        int n;
        cin>>n;
        
        int A[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cin>>A[i][j];
            }
        }
        for(int i=n-2;i>=0;i--){
	            for(int j=0;j<=i;j++){
	                A[i][j] += max(A[i+1][j],A[i+1][j+1]);
	            }
	        }
    
	        cout<<A[0][0]<<endl;
	
}
return 0;
}
