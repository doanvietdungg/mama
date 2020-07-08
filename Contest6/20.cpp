#include<bits/stdc++.h>

using namespace std;
long int n , k;
long int a[1000005];
long int res; 
long int tmp;
int main(){
	int T;
	cin >> T;
	while(T--){
		cin >> n >> k;
		for(long int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a , a+n);
		res = 0;
		for(long int i = n - 1 ; i > 0 ; i--){
			tmp = upper_bound(a , a + i , (a[i] - k)) -&a[0];
//			cout << tmp << " ";
			if(tmp < i)
				res =res +(i-tmp);
			else 
				continue;		
		}
		cout << res << endl;	
	}
	return 0;
}
