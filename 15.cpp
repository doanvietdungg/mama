#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++){
			int c;
			cin >> c;
			v.pb(c);
		}
		sort(v.begin(), v.end());
		for(int i = 0; i < n; i++){
			cout << v[i] << " ";
		}
		cout << endl;
	}
}
