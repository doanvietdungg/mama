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
		vector<long long> res;
		for(long int i = 0 ; i < n ; i++){
			cin >> a[i];
			res.push_back(a[i]);
		}
		for(long int i = 0 ; i < m ; i++){
			cin >> b[i];
			res.push_back(b[i]);
		}
		sort(res.begin() , res.end());
		for(long int i = 0 ; i < res.size() ; i++)
			cout << res.at(i) << " ";
		cout << endl;	
	}
	
	return 0;
}
