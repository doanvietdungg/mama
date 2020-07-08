#include<iostream>

using namespace std;

long long n;
long long mod = 1e9+7;
long long Sodao(long long n1){
	long long res = 0;
	while(n1 > 0){
		long long tmp = n1%10;
		res = res * 10 + tmp;
		n1 /= 10;
	}
	return res;
}

long long LuyThua(long long a , long long b){
	if(b == 0) return 1;
	if(b == 1)	return a;
	long long x = LuyThua(a , b/2);
	if(b %2 == 1)
		return x * x%mod * a%mod;
	else 
		return x * x%mod ;	
}

int main(){
	int  T;
	cin >> T;
	while(T--){
		cin >> n;
//		cout << Sodao(n) << endl;
		cout << LuyThua(n , Sodao(n)) << endl;
	}
	
	return 0;
}
