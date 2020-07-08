#include<bits/stdc++.h>
using namespace std ;

void Sinh(int a[] , int n){
	int i = n ;
	a[0] = 1 ;
	while(a[i-1] > a[i])
		i--;
	int k = n ;
	while(a[i-1] > a[k])
		k--;
	swap(a[k] , a[i-1]);
	int r = i  , s = n;	
	while(r < s){
		swap(a[r] , a[s]);
		r++;
		s--;
	}	
}

void HienThi(int a[] , int n){
	for(int i = 1 ; i <= n ; i++){
		cout << a[i] << " ";		
	}
}

int main(){
	int T;
	cin >> T ;
	while(T--){
		int N ;
		cin >> N ;
		int a[N+1];
		for(int i = 1 ; i <= N ; i++ ){
			cin >> a[i];
		}
		Sinh(a , N );
		HienThi(a , N);
		cout << endl ;
	}
	
	
	return 0;
}
