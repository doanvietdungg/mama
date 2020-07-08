#include<bits/stdc++.h>

using namespace std ;

void Sinh(int A[] , int n){
	int k = n - 1 ; 
	while(A[k] == 1){
		A[k] = 0 ;
		k--;
			
	}
	if(k >= 0){
		A[k] = 1 ;
	}	
}

void HienThi(int A[] , int  n){
	for(int i = 0 ; i < n ; i++){
		cout << A[i];
	}

}

int main(){
	int T;
	cin >> T ;
	while(T--){
		string a ;
		cin >> a;
		int A[a.length() + 10];
		for(int i = 0 ; i < a.length() ; i++){
			A[i] = a[i] - '0';
			
		}
		Sinh(A , a.length());
		HienThi(A , a.length());
		cout << endl ;
		
	}
	
	return 0;
}
