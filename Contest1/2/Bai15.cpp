#include<iostream>
#include<string>

using namespace std ;

bool ok = true;
int stt ;
string a ;

void Sinh(int A[]  , int n){
	int i  = n - 1 ;
	while(i > 0 && A[i-1] >= A[i])
		i--;
	if(i == 0 )	ok = false ;	
	else{
		int k  = n - 1 ;
		while(A[i-1] >= A[k])
			k-- ;
		swap(A[i-1] , A[k]);
		int l = i , r = n-1;
		while(l < r){
			swap(A[r] , A[l]);
			r-- ;
			l++ ;
		}	
		
	}
}

void HienThi(int A[] , int n){
	if(ok == true){
		cout << stt << " ";				
		for(int i = 0 ; i < n ; i++)
			cout << A[i] ;	
	}
	
	else 
		cout << stt << " " << "BIGGEST" ;
		
}

int main(){
	int t ;
	cin >> t ;
	while(t--){
		cin >> stt ;
		cin >> a ;
		int A[a.length() + 3];
		for(int i = 0 ; i < a.length() ; i++){
			A[i] = a[i] - '0';
		}
		Sinh(A , a.length());
		HienThi(A , a.length());
		cout << endl ;
		ok = true ;	
	}
	
	return 0 ;
}
