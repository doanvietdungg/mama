#include<bits/stdc++.h>

using namespace std;

void Solve(){
	long int n , k ;
	cin >> n >> k;
	vector <long int> a;
	for(long int i = 0 ; i < n ; i++){
		long int tmp ;
		cin >> tmp;
		a.push_back(tmp);
	}
	if(!binary_search(a.begin() , a.end(), k)){
		cout << "NO" << endl;
	}else{
		long int res = upper_bound(a.begin() , a.end() , k) - a.begin();
		cout << res << endl;
	}	
	
}

int main(){
	int T ;
	cin >> T ;
	while(T--){
		Solve();
	}
	return 0;
}
