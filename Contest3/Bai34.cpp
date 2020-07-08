#include<bits/stdc++.h>

using namespace std; 

void Solve(){
	int m , n;
	cin >> m >> n ;
	vector<int> p;
	vector<int> q;
	for(int i = 0 ; i < m ; i++){
		int tmp ;
		cin >> tmp ;
		p.push_back(tmp);
	}
	for(int i = 0 ; i < n ; i++){
		int tmp ;
		cin >> tmp ;
		q.push_back(tmp);
	}
	vector<long int> mul;
	int tmp1 = m + n - 1 ;
	int tmp2 = 0  , tmp3 = 0;
	
	while(tmp2 < tmp1){
		int sum = 0;
		for(int i = 0 ; i < m ; i++){
			if((tmp3 - i) >=0 && (tmp3 -i) < n)
				sum += p[i] * q[tmp3 - i]; 
		}
		mul.push_back(sum);
		tmp2 ++ ;
		tmp3++;
	} 
	for(int i = 0 ; i < tmp1 ; i++){
		cout << mul[i] << " ";
	}
	cout << endl;
}

int main(){
	int T ;
	cin >> T;
	while(T--){
		Solve();
	}
	return 0 ;
}
