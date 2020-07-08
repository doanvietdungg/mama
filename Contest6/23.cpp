#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
long int n;
long int a[10000005]; 
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n;
		for(long int i = 1 ; i < n ; i++ ){
			cin >> a[i];
		}
		for(long int i = 1 ; i <= n  ; i++){
			if(a[i] != i){
				cout << i << endl;
				break;
			}
		}
	}
	
	return 0;
}
