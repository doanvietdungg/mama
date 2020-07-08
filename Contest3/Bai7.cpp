#include<bits/stdc++.h>

using namespace std;

void Solve(){
	long int n;
	cin >> n;
	long long a[n] , b[n];
	for(long int i = 0 ; i < n ; i++)
		cin >> a[i];
	for(long int i = 0 ; i < n ; i++)
		cin >> b[i];
	sort(a , a+n);
	sort(b , b+n);
	long long int res = 0;
	for(long int i = 0 ; i < n ; i++){
		res += a[i] * b[n-i-1];
	}
	cout << res << endl;		
}

int main(){
	int T;
	cin >> T ;
	while(T--){
		Solve();
	}
	
	return 0;
}
