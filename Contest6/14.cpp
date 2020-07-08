#include<bits/stdc++.h>

using namespace std;

bool ktnt(long int a){
	for(long int i = 2 ; i * i <= a ; i++){
		if(a%i == 0)
			return false;
	}
	return true;
}
int main(){
	int T;
	cin >> T ;
	while(T--){
		int check = 0;
		long int n;
		cin >> n;
		for(long int i = 2 ; 2*i <= n ; i++ ){
			if(ktnt(i) && ktnt(n-i)){
				check = 1;
				cout << i << " " << n-i << endl;
				break;
			}	
		}
		if(check == 0)	cout << -1 << endl;
	}

	return 0;
}
