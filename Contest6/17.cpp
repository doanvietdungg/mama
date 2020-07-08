#include<bits/stdc++.h>

using namespace std;
long int n , m;
long long a[1000005];
long long b[1000005];
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> m;
		for(long int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		for(long int i = 0 ; i < n ; i++)
			cin >> b[i];
		sort(a , a+n);
		sort(b , b+m);
		cout << a[n-1]*b[0] << endl;	
	}
	
	return 0;
}
