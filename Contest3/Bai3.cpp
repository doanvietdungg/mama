#include<bits/stdc++.h>

using namespace std;
long long int mod = 1e9+7;

int main(){
	int T ;
	cin >> T ;
	while(T--){
		long long int Max = 0 ;
		long int n ;
		cin >> n ;
		long int a[n];
		for(long int i = 0 ; i < n ; i++)
			cin >> a[i];
		sort(a , a+n);
		for(long int i = 0 ; i < n ; i++){
			Max += a[i] * i;
			Max %= mod;
		}
		cout << Max << endl;	
		
	} 
	
	return 0;
}
