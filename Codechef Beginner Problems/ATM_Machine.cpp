#include <iostream>
using namespace std;

int main() {
 int t;
 cin>>t;
 while(t--){
     int k,n,i,s;
     cin>>n;
     cin>>k;
     for(i=0;i<n;i++){
         int a;
         cin>>a;
         if(k>=a){
             k=k-a;
             cout<<"1";
          }
        
      else
      {
          cout<<"0";
      }
     }
    cout<<endl;
 }
	return 0;
}
