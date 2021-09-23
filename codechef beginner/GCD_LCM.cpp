#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b){
    return b?gcd(b,a%b):a;
}

int main() {
	int nt;
	cin>>nt;
	while(nt--){
	    long long a,b;
	    cin>>a>>b;
	    long long hcf = gcd(a,b);
	    long long lcm = (a*b)/hcf;
	    cout<<hcf<<" "<<lcm<<endl;
	}
	return 0;
}

