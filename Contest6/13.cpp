#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T ;
	while(T--){
		int n;
		cin >> n;
		long int x ;
		cin >> x;
		long int a[1005];
		for(int i = 0 ; i < n ; i++){
			cin >> a[i];
		}
		sort(a , a+n);
		if(!binary_search(a , a+n , x)){
			cout << -1 << endl;
		}
		else{
			int i ;
			for( i = 0 ; i < n ; i++){
				if(a[i] == x)
					break;
			}
			int res = 0;
			while(a[i] == x && i < n ){
				res++;
				i++;
			}
			cout << res << endl;
		}
	}
	
	return 0;
}
