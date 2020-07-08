#include<bits/stdc++.h>

using namespace std;
int a[1005];
int main(){
	int T;
	cin >> T;
	while(T--){
		int n;
		cin >> n;
		int res = 0;
		for(int i = 0 ; i < n ; i++)
			cin >> a[i];
		sort(a , a+n);	
		for(int i = 0 ; i < n-1 ; i++){
			if((a[i+1] - a[i]) > 1)
				res += a[i+1] - a[i]-1;
		}
		cout << res << endl;	
	}
	
	return 0;
}
