#include<bits/stdc++.h>
using namespace std;

int main(){

	int t;
	cin >> t;

	while(t--){
		float basic_salary;
		
		cin>>basic_salary;
		float DA, HRA, GS;
		if(basic_salary < 1500){
			HRA = 0.10 * basic_salary;
		    DA = 0.90 * basic_salary;
		  GS = basic_salary + HRA + DA;
		cout<<fixed<<setprecision(2)<<GS<<endl;
		}
		    else if(basic_salary >= 1500){
		    HRA = 500;
		    DA = 0.98 * basic_salary;
            GS = basic_salary + HRA + DA;
           cout<<fixed<<setprecision(2)<<GS<<endl;
		    }     
	}
}
