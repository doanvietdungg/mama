#include<bits/stdc++.h>
using namespace std ;
 
int S[20] ;
int a[20];
int N ;
void Try(int i){
	for(int j = a[i-1] ; j >= 1 ; j-- ){
		if(j <= (N - S[i-1])){
			a[i] = j ;
			S[i] = S[i-1] + j ;
		
			if(S[i] == N ){
				cout << "(";
				for(int k = 1 ; k <= i ; k++){
					cout << a[k] << " ";
				}
				cout << ") ";
			}
			else 
				Try(i + 1);
		}
	}
}
int main(){
	int T ;
	cin >> T ;
	while(T--){
		cin >> N ;
		a[0]  = N ;
		S[0] = 0 ;
		Try(1);
		cout << endl ;		
	}	
	return 0 ;
}

