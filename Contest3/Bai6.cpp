#include<bits/stdc++.h>

using namespace std;

void Solve(){
	bool check = true;
	int n;
	cin >> n;
	int a[50] , b[50];
	for(int i = 0 ; i < n ; i++){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b , b+n);
	for(int i = 0 ; i < n ; i++){
		if(a[i] != b[i] && a[i] != b[n-i-1]){
			check  = false;
			break;
		}		
	}
	if(check) cout << "Yes" << endl;
	else cout << "No" << endl;
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		Solve();
	}
	return 0;
}
