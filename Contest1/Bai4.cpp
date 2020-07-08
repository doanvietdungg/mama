#include<bits/stdc++.h>
using namespace std ;

int N ;
int a[11];
void Try(int i){
	for(int j = 0 ; j <= 1 ; j++){
		a[i] = j ;
		if(i == N){
			for(int k = 1 ; k <= N ; k++){
				if(a[k] == 0)	cout << "A" ;
				else  cout << "B";
			}
			cout << " ";
		}
		else 
			Try(i + 1);
	}	
}
int main(){
	int T ; 
	cin >> T;
	while(T--){
		cin >> N ;
		Try(1);
		cout << endl ;			
	}
	return 0 ;
}
