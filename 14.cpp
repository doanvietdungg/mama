#include <bits/stdc++.h>
#define N 1000000000
#define ll long long
#define pb push_back

using namespace std;

ll res, tmp;
string s;
bool ok;

void Solve(int pos, int x, int limit){
	//cout << tmp <<" ";
	if(pos == s.length()){
		ll c = cbrt(tmp), d = c + 1 ;
		if( (c * c *c == tmp || d*d*d == tmp) && x == limit){
			res = max(res,tmp);
			ok = true;
		}
		return;
	}
	if(x < limit) Solve(pos+1,x+1,limit);
	if(x <= limit){
		tmp = tmp*10 + (ll)(s[pos] - '0');
		Solve(pos+1,x,limit);
		tmp/=10;
	}
}

void init(){
	ok = false;
	res = 0;
	for(int  i = 0 ; i < s.length() ; ++i){
		tmp = 0;
		Solve(0,0,i);
	}
	if(ok) cout << res << endl;
	else cout << -1 <<endl;
}

int main(){
	int t; cin >> t;
	while( t-- ){
		cin >> s;
		init();
	}
}

