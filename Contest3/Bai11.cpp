#include<iostream>
#include<queue>
#define mod 1000000007
using namespace std;

int main(){
	long long n;
	cin >> n;
	priority_queue<long long , vector<long long> , greater<long long> > a;
	long long tmp;
	for(long long i = 0 ; i < n ; i++){
		cin >> tmp ;
		a.push(tmp);
	}
	long long res = 0;
	while(a.size() > 1){
		long long x = a.top();	a.pop();
		long long y = a.top();	a.pop();
		long long tmp1 = (x+y)%mod;
		a.push(tmp1);
		res += tmp1;
		res %= mod;
	}
	cout << res << endl;
	return 0;
}
