#include<bits/stdc++.h>

using namespace std;

int main(){
	int T;
	cin >> T ;
	while(T--){
		long long int n;
		cin >> n;
		vector <long long int> a;
		vector <long long int> b;
		for(long long int i = 0 ; i < n ; i++){
			long long int x ;
			cin >> x;
			a.push_back(x);
			b.push_back(x);
		}
		sort(b.begin() , b.end());
		for(long long int i = 0 ; i < n ; i++){
			if(a.at(i) != b.at(i)){
				cout << i + 1 << " ";
				break;
			}
		}
		for(long long int i = n - 1 ; i >= 0 ; i--){
				if(a.at(i) != b.at(i)){
				cout << i+1 ;
				break;
				}
		}
		cout << endl;
	}
	
	return 0;
}
