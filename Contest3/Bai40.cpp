#include<bits/stdc++.h>
using namespace std;

int main(){
	int T;
	cin >> T;
	while(T--){
		int n ;
		cin >> n ;
		vector<int> a ;
		for(int i = 1 ; i <= n ; i++){
			int x ;
			cin >> x ;
			a.push_back(x);
		}
		sort(a.begin() , a.end());
		if(!binary_search(a.begin() , a.end() , 0)){
			cout << 0 << endl ;
		}
		else{
			if(!binary_search(a.begin() , a.end(), 1)){
				cout << n << endl;
			}
			else{
				int bg1 = upper_bound(a.begin() , a.end() , 0) - a.begin();
				cout << bg1 << endl ;
			}
		}

	}
	return 0 ;
}
