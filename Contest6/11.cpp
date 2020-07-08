#include<bits/stdc++.h>

using namespace std;

int main(){
	int T ;
	cin >> T ;
	while(T--){
		int n ; 
		cin >> n;
		long int a[n+1];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a , a+n);
		int tmp1 = upper_bound(a , a+n , 0) - &a[0];
		cout << tmp1 << " " << a[tmp1] << endl;
		if(tmp1 == 0)	cout << a[0] + a[1];
		else if(tmp1 == n)	cout << a[n-1] + a[n - 2];

	}
	
	return 0;
}
