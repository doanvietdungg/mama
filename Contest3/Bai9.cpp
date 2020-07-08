#include<bits/stdc++.h>

using namespace std;

struct job{
	int id , dl , pf;
};

bool check(job x , job y){
	if(x.pf > y.pf)	return true ;
	else return false;
}

job a[1001];

void Solve(){
	int n ;
	cin >> n ;
	for(int i = 0 ; i < n ; i++){
		cin >> a[i].id >> a[i].dl >> a[i].pf;
	}
	sort(a , a+n , check);
	int d = 0 ;
	long int sumpf = 0;
	int xet[1001] = {0};
	for(int i = 0 ; i < n ; i++){
		while(xet[a[i].dl] && a[i].dl > 0) a[i].dl -= 1;
		if(!xet[a[i].dl] && a[i].dl > 0){
			sumpf += a[i].pf;
			d++;
			xet[a[i].dl] = 1;
		}
	}
	cout << d << " " << sumpf << endl;
	
}


int main(){
	int T;
	cin >> T ;
	while(T--){
		Solve();	
	}
	return 0;
}
