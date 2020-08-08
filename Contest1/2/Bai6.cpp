#include<bits/stdc++.h>

using namespace std ;
int N ;
bool Check[20] = {false};
int a[20];

void Try(int i){
	for(int j = 1 ; j <= N ; j++ ){
		if(Check[j] == false){
			a[i] = j;
			Check[j] = true ;
			if(i == N){
				for(int k = 1 ; k <= N ; k++){
					cout << a[k];
				}
				cout << " ";	
			}
			else
				Try(i+1);
			Check[j] = false ;	
		}
	}
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		cin >> N ;
		Try(1);
		cout << endl ;
		
	}
	
	return 0 ;
}
