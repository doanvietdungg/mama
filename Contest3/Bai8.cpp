#include<bits/stdc++.h>

using namespace std;

struct data{
	int fi,en; 
};
data a[1001];

bool check(data x  , data b){
	if(x.en < b.en) 
		return true;
	else return false;	
}

void Solve(){
	int n;
	cin >> n;
	for(int i = 0 ; i < n  ; i++)
		cin >> a[i].fi;
	for(int i = 0 ; i < n ; i++)
		cin >> a[i].en;
	sort(a , a+n ,check);
	int tmp = 1 , i = 0;
	for(int j = 1 ; j < n ; j++){
		if(a[j].fi >= a[i].en){
			tmp++;
			i = j;
		}
	}
	cout << tmp << endl;		
}

int main(){
	int T;
	cin >> T ;
	while(T--){
		Solve();
	}
	
	return 0;
}
