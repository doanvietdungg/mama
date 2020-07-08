#include<bits/stdc++.h>

using namespace std ;

int n , k ;
int A[20];

void KhoiTao(){
	for(int i = 1 ; i <= k ; i++){
		A[i] = i ;
	}
}

void Sinh(){
	int i = k ;
	while(A[i] == n - k + i)
		i--;
	A[i]++;
	for(int j = i + 1 ; j <= k ; j++){
		A[j] = A[j-1] + 1 ;
	}
}

void HienThi(){
	for(int i = 1 ; i <= k ; i++){
		cout << A[i] ;
	}
	cout << " ";
}

bool Check(){
	for(int i = 1 ; i <= k ; i++){
		if(A[i] != n - k + i)
			return false ;
	}
	return true ;
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		cin >> n >> k;
		KhoiTao();
		while(!Check()){
			HienThi();
			Sinh();
		}
		HienThi();
		cout << endl ;
	}
	
	
	return 0 ;
}
