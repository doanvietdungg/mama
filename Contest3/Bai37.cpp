#include<bits/stdc++.h>
using namespace std;

void Solve(){
	long long int n , x;
	cin >> n >> x ;
	vector<long long int> a;
	for(long long int i = 0 ; i < n ; i++){
		long long int tmp;
		cin >> tmp;
		a.push_back(tmp);	
	}
	if(a[0] > x){
		cout << -1 << endl;
	}else{
		long long int tmp1 = upper_bound(a.begin() , a.end() , x) - a.begin();
		cout << tmp1 << endl;
	}	
}

int main(){
	int T;
	cin >> T ;
	while(T--){
		Solve();	
	}
	return 0;
}
