#include <bits/stdc++.h>
using namespace std;

void uocNT(long long a, long long k){
	long long count = 0;
	for(long long i = 2; i <= sqrt(a); i++){
		while(a % i == 0){
			count++;
			if(count == k) cout << i;
			a /= i;
		}
	}
	if(a > 1){
		count++;
		if(count == k) cout << a;
	}
	if(count < k) cout << "-1";
	cout << endl;
}

int main(){
	int t;
	long long n, k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		uocNT(n, k);
	}
	return 0;
}
