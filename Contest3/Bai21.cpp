#include<bits/stdc++.h>
using namespace std ;
long long int mod = 1e9 + 7;
long long n , k;
 

long long int Solve(long long a , long long b ){
	if(b == 0)	return 1;
	if(b == 1)	return a;
	long long x = Solve(a , b/2);
	if(b %2 == 1)
		return x * x%mod * a%mod;
	else 
		return x * x%mod;	
	 
}

int main(){
	int T;
	cin >> T ;
	while(T--){
		cin >> n >> k; 
		cout << Solve(n , k) << endl;
	}
	
	return 0;
}
