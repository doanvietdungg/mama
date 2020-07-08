#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n , k ;
		cin >> n >> k;
		long int a[1005];
		for(int i = 0 ; i < n ;i++){
			cin >> a[i];
		}
		sort(a , a+n , greater<long int>() ) ;
		for(int i = 0 ; i < k ; i++)
			cout << a[i] << " ";
		cout << endl;	
	}	
	return 0;
}
