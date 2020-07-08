#include<bits/stdc++.h>

using namespace std;
long int a[1000005];
int main(){
	int T;
	cin >> T ;
	while(T--){
		long int n;
		cin >> n;
		for(long int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a , a+n);
		for(long int i = 0 ; i < n ; i++){
			cout << a[i] << " ";
		} 
		cout << endl;
	}
	
}
