#include<iostream>
using namespace std;

long long mod = 123456789;
long long n;
long long Solve(long long n){
		if(n == 0) return 1;
		if(n == 1) return 2;
		long long p = Solve(n/2);
		if(n %2 == 0)
			return  (p%mod * p%mod) %mod;
		if(n %2 == 1)
			return 2*((p*p)%mod ) %mod; 	
}

int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		n = n -1;
		cout << Solve(n) << endl;
	}
	return 0;
}
