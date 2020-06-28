	#include<iostream>

using namespace std;

void solve(){
	string a;
	string b;
	
	cin >> a>>b;
	int n = a.size();
	int m=b.size();
	long long  count[26] = {0};
	long long coun[26] = {0};
	
	
	for(int i = 0 ; i < n; i++ ) count[ a[i] - 'A' ]++; 
	for(int i = 0 ; i < m; i++ ) coun[ b[i] - 'A' ]++;
	
	long long  max=0;
	for(int i = 0 ; i < 26 ;i++){
		if(count[i] !=0 && coun[i]!=0){
			if(count[i]>=coun[i]){
				max+=coun[i];
			}
		else{
			max+=count[i];
		}
			}
			}
				cout<<max;
		}

//cout<<count[i]<<" ";
	

//	cout<<endl;
//	for(int i=0;i<26;i++){
//		cout<<coun[i]<<" ";
//	}
	
	
//	if(n % 2 == 0) {
//		if( max <= n/2 ) cout << "1" << endl;
//		else cout << "-1" << endl;
//	}
//	else {
//		if(max <= n / 2 + 1) cout << "1" << endl;
//		else cout << "-1" << endl;
//	}



int main(){
	int test;
	cin >> test;
	while(test--){
		solve();
		cout<<endl;
	}
}
