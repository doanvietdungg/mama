#include<bits/stdc++.h>

using namespace std;

void Solve(){
	int n , k;
	cin >> n >> k;
	int a[n];
	for(int i = 0 ; i < n ; i++)
		cin >> a[i];
	sort(a , a+n);
	long long int x1 = 0 , x2 = 0 , x3 = 0 , x4 = 0;
	for(int i = 0 ; i < k ; i++){
		x1 += a[i];
	}
	for(int i = k ; i < n ; i++){
		x2 += a[i];
	}
//	cout << x2-x1 << endl;
	for(int i = 0 ; i < n-k ; i++)
		x3 += a[i];
	for(int i = n-k ; i < n ; i++)
		x4 += a[i];
	cout << max((x2-x1) , (x4-x3)) << endl;			
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		Solve();
	}
	return 0;
}
